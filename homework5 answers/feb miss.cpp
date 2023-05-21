#include<iostream>
using namespace std;

int fibonacci(int n){
	if(n==0)
	return(0);
	else if (n==1)
	return(1);
	else 
	return(fibonacci(n-1)+fibonacci(n-2));
}
int main(){
	int num;
	cout<<"Enter the number of values to display"<<endl;
	cin>>num;
	
	for(int c=0;c<num;c++){
		cout<<fibonacci(c)<<"\t";
		
	}
	return 0;
}
