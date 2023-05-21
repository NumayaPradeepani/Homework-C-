#include<iostream>
using namespace std;
int main(){
	int s[10]; //define the array
	int CI=0; //customer choice
	int firstclass=0, economic=5;
//assign value of each seat is 0
	for(int i=0;i<10;i++){
		s[10]=0;
	}
	while(firstclass<5 || economic<10){
		cout<<"Welcome to XYZ Airlines"<<endl;
		cout<<".................................."<<endl;
		
		cout<<"Please type 1 for first class or Please type 2 for economy: ";
	    cin>>CI;
	    while(!(CI==1 || CI==2)){
	    	cout<<"Invalid Input Please enter again"<<endl;
	    	cout<<"Please type 1 for first class or Please type 2 for economy: ";
	    	cin.clear();
	    	cin.ignore();
			cin>>CI;
		}
		if(CI==1){
			if(firstclass<5){
				cout<<"Boarding Pass" <<endl;
				cout<<"..............."<<endl;
				cout<<"Seat number:"<<(firstclass+1)<<endl;
				cout<<"Section: Firstclass"<<endl;
				s[firstclass]=1;
				firstclass++;
			}
			else if (economic<10){
				char CI1='\0';
				while(!(CI1=='Y'|| CI1=='y'|| CI1=='N' || CI1=='n')){
					cout<<"Firstclass is filled. Do you like to book a seat in economic section?:"<<endl;
					cout<<"If yes type 'Y', If no type 'N' :";
					cin>>CI1;
					
					if(!(CI1=='Y'|| CI1=='y'|| CI1=='N' || CI1=='n')){
						cout<<"Invalid input please enter again:"<<endl;
						cout<<"If yes type 'Y', If no type 'N' :";
						cin.clear();
						cin.ignore();
						cin>>CI1;
					}
					if(CI1=='Y' || CI1=='y'){
						cout<<"Boarding Pass" <<endl;
				        cout<<"..............."<<endl;
				        cout<<"Seat number:"<<(economic+1)<<endl;
				        cout<<"Section: Economic section "<<endl;
				        s[economic]=1;
				        economic++;
					}
					else if(CI1=='N'|| CI1=='n'){
						cout<<"Next flight leaves in 3 hours"<<endl;
						
					}
				}
			}
		}
		if(CI==2){
			if(economic<10){
				cout<<"Boarding Pass" <<endl;
				cout<<"..............."<<endl;
				cout<<"Seat number:"<<(economic+1)<<endl;
				cout<<"Section: Economic section"<<endl;
				s[economic]=1;
				economic++;
				
			}
			else if (economic=10){
				cout<<"Economic section is filled. Next flight leaves in 3 hours"<<endl;
			}
		}
	}
}
