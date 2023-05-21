 #include<iostream>    
using namespace std;    

//fuction  
void printFibonacci(int N){    
    static int n1=0, n2=1, n3;    
    if(N>0){    
         n3 = n1 + n2;    
         n1 = n2;    
         n2 = n3;    
         cout<<n3<<" ";    
         printFibonacci(N-1);    
    }    
}    
int main(){    
    int N;    
    cout<<"Enter the number of elements to display: ";    
    cin>>N;    
    cout<<"Fibonacci Sequence: ";    
    cout<<"0 "<<"1 ";  
    printFibonacci(N-2);  //n-2 because 0 and 1 are already print 
    return 0;  
}    
