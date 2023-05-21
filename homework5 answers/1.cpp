#include<iostream>
using namespace std;

int integerpower(int base, int exponent) {
   int i;
   double power=1;
   
   for(i=1;i<=exponent;i++)
   power=power*base;
   return power;
}
int main() {
   int base;
   int exponent;
   double y=0;
	cout<<"Enter a value for Base:";
	cin>>base;
	cout<<"Enter a value for exponent:";
	cin>>exponent;
	if(exponent<0 && exponent!=0){
		cout<<"Your input is invalid  range "<<endl;
		cout<<"Enter a value for exponent again:";
		cin>>exponent;
	}
	y=integerpower(base,exponent);//calling function
	cout<<"power is:"<<y<<endl;
	return(0);
}
   

