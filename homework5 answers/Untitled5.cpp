#include<iostream>
using namespace std;

int totseconds(int,int,int);

int main(){
	int hours[2],minutes[2],second[2];
	
	cout<<"Input time 1 and time 2"<<endl;
	cout<<"-----------------------"<<endl<<endl;
	
	for(int i=0;i<2;i++){
		cout<<"input time"<<(i+1)<<endl;
		cout<<"--------------"<<endl<<endl;
		
		hours[i]=-1;
		while(!(hours[i]>=1 && hours[i]<=12)){
			cout<<"Input hours:(between 1 and 12) :";
			cin>>hours[i];
			if(!(hours[i]>=1 && hours[i]<=12)){
				cout<<"Invalid input, enter hours again:"<<endl;
				
			}
		}
		cout<<endl;
	}
}
