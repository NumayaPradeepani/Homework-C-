#include<iostream>
using namespace std;
int main (){
	int t[2][5];
    for(int i=0; i<2; i++){
       for(int j=0; j<5; j++){
              cout<<"Input integer value for row"<<i+1<<"/column"<<j+1<<":";
              cin>> t[i][j];
        }
}
    cout<<"\n Two Dimensional Array is : \n";
        for(int i=0; i<2; i++){
        	for(int j=0; j<5; j++){
        		cout<<" "<<t[i][j]<<" ";
			}
                cout<<"\n";
		}
		return 0;

}
