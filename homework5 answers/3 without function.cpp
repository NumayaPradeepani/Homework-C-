#include<iostream>
#include<math.h>
using namespace std;

int main(){
	double x1,x2,y1,y2,x,y,z;
	double distance;
	cout<<"Enter value for x1:"<<endl;
	cin>>x1;
	cout<<"Enter value for x2:"<<endl;
	cin>>x2;
	cout<<"Enter value for y1:"<<endl;
	cin>>y1;
	cout<<"Enter value for y2:"<<endl;
	cin>>y2;
	x=x1-x2;
	y=y1-y2;
	z=pow(x,2)+pow (y,2);
	distance=sqrt(z);
	
	cout<<"The Distance is:"<<distance<<endl;
	return 0;
	
}
