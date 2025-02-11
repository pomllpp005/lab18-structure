#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect R1 , Rect R2){
	double Xl, Xr, Yt, Yb;

    if (R1.x < R2.x) Xl = R2.x;
    else Xl = R1.x;

    if (R1.x + R1.w < R2.x + R2.w) Xr = R1.x + R1.w;
    else Xr = R2.x + R2.w;

    if (R1.y < R2.y) Yt = R1.y;
    else Yt = R2.y;

    if (R1.y - R1.h > R2.y - R2.h) Yb = R1.y - R1.h;
    else Yb = R2.y - R2.h;

    if (Xr > Xl && Yt > Yb) return (Xr - Xl) * (Yt - Yb);
    return 0;



}

int main(){
	

	Rect R1 = {-1,2,6.9,9.6}; 
	Rect R2 = {0,0,1.2,2.5}; 
	cout << overlap(R1,R2);

	return 0;
}
