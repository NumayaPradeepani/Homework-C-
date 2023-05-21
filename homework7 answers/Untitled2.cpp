#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	int t[2][5];
	int min=0;
	min=t[0][0];
	for(int i=0; i<2; i++){
		for(int j=0; j<5; j++){
			cout<<"Input values for tha array:"<<i+1<<":"<<j+1<<endl;
			cin>>t[i][j];
			if(min>t[i][j])
	        min=t[i][j];
	        cout<<t[0][j]<<endl;

			
		}
	}
	cout<<"Smallest number:"<<min<<endl;
	cout<<"........................................"<<endl;

	for(int i=0; i<2; i++)
        {
                for(int j=0; j<5; j++)
                {
                	    
                        cout<<setw(2)<<" "<<t[i][j]<<setw(5)<<" ";
                }
                cout<<"\n";
        }
	
}
