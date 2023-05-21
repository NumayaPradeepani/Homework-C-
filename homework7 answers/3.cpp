#include<iostream>
#include<string.h>
using namespace std;
int main(){
	char s[100];
	char word;
	cout<<"Enter a word:";
	cin.getline(s,100);
	cout<<endl<<endl;
	
	int len=strlen(s);
	for(int i=0; i<len; i++){
		if(s[i]>=97 && s[i]<=122){
			s[i]=s[i]-32;
		}
	}
	cout<<"Text in uppercase:"<< s<< endl<<endl;
	
	len=strlen(s);
	for(int i=0; i<len; i++){
		if(s[i]>=65 && s[i]<=90){
			s[i]=s[i]+32;
		}
	}
	cout<<"Text in lowercase:"<< s << endl<<endl;
}
