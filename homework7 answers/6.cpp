#include<iostream>
#include<string.h>
using namespace std;

int main(){
	int distance[4][4]={0,30,212,300,30,0,195,225,212,195,0,200,300,225,200,0};
	int total=0;
	int i,j;
	cout<<"Welcome to the trip advicer !!!!"<<endl;
	cout<<"............................................."<<endl;
	cout<<"Enter1-Negombo"<<endl;
	cout<<"Enter2-Colombo"<<endl;
	cout<<"Enter3-Kandy"<<endl;
	cout<<"Enter4-Matara"<<endl;
	
	int CL; //current location
	cout<<"Please enter your current location:";
	cin>>CL;
	cout<<endl<<endl;
	if(!(CL==1 || CL==2 || CL==3 || CL==4)){
		cout<<"Invalid input please again enter current location:";
		cin.clear();
		cin.ignore();
		cin>>CL;
	}
	
	int dest;//destination
	cout<<"Please enter your destination:";
	cin>>dest;
	cout<<endl<<endl;
	if(!(dest==1|| dest==2 || dest==3 || dest==4)){
		cout<<"Invalid input please again enter detination";
		cin.clear();
		cin.ignore();
		cin>>dest;
	}
	char more='\0';
	while(!(more=='Y'|| more=='y'|| more=='N' || more=='n')){
		cout<<"Do you wish to travel further( if yes 'y', if no 'n'):";
	    cout<<more;
	    
	    if(!(more=='Y'|| more=='y'|| more=='N' || more=='n')){
	    	cout<<"Invalid input please enter again:"<<endl;
			cout<<"If yes type 'Y', If no type 'N' :";
			cin.clear();
			cin.ignore();
			cin>>more;
		}
		int finaldest;
		if(more=='Y' || more=='y'){
			cout<<"please enter your final distance:";
			cin>>finaldest;
			cout<<endl;
			for(i=0; i<4; i++){
				for(j=0;j<4;j++){
					total=distance[CL-1][dest-1]+distance[dest-1][finaldest-1];
				}
			}
			cout<<"Total distance :"<<total<<"km"<<endl;
		}
		else {
			for(i=0; i<4; i++){
				for(j=0;j<4;j++){
					total=distance[CL-1][dest-1];
				}
			}
			cout<<"Total distance :"<<total<<"km"<<endl;
		}
	}
}
