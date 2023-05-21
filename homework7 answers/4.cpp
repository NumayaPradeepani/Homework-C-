#include<iostream>
#include<string.h>
using namespace std;

int main(){
	char str1[100], str2[100];
	
	cout<<"Input word1:";
	cin.getline(str1,100);
	
	cout<<"Input word2:";
	cin.getline(str2,100);
	
	int compare=strcmp(str1,str2);
	
	if(compare==0){
		cout<<" Words are equal"<<endl;
	}
	else if (compare==1){
		cout<<"word1 is greater than word2"<<endl;
	}
	else if (compare==-1){
		cout<<"word1 is less than word2"<<endl;
	}
	return 0;
}
