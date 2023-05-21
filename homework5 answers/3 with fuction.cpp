#include<iostream>
#include<math.h>
using namespace std;

double Distance(double x1,double x2, double y1, double y2){
	double x,y,z;
	double distance;
	x=x1-x2;
	y=y1-y2;
	z=pow(x,2)+pow(y,2);
	distance= sqrt(z);

	return (distance);
}


int main(){
	double x1,x2,y1,y2;
	double S;
	
	cout<<"Enter value for x1:"<<endl;
	cin>>x1;
	cout<<"Enter value for x2:"<<endl;
	cin>>x2;
	cout<<"Enter value for y1:"<<endl;
	cin>>y1;
	cout<<"Enter value for y2:"<<endl;
	cin>>y2;
	
	S=Distance(x1,x2,y1,y2);
	cout<<"The Distance is:"<<S<<endl;
	return 0;
	
}
