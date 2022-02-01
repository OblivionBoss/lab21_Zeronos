#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect I, Rect II){
	double WI = min(I.x + I.w, II.x + II.w) - max(I.x, II.x);
    double HI = min(I.y, II.y) - max(I.y - I.h, II.y - II.h);
    double areaI = 0;
    if( WI > 0 && HI > 0 )
    {
        areaI = WI * HI;
    }
     
    return areaI;
}

int main(){
	Rect I = {1,1,5,5};
	Rect II = {2,2,5,5};
	cout << overlap(I,II);
	return 0;
}