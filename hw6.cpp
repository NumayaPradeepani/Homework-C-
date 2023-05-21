//IM/2019/109- Numaya Pradeepani
//Homewrok6- Vender machine 
#include<iostream>
using namespace std;

int main() {
	int price;
	int A=50,B=70,C=40,D=60;//prices of products
	int r1=100,r2=100,r5=100,r10=100;//number of coins in each denomination
	int of1=0,of2=0,of5=0,of10=0;//number of coins in each overflow bin
	int p=0,q=0,r=0,s=0;//number of coins user input
	int p_=0,q_=0,r_=0,s_=0;//
	int Utotal;// entire amount user input
	int balance;
	int coin1=100,coin2=100,coin5=100,coin10=100;
	while(coin1>0||coin2>0||coin5>0||coin10>0){
		cout<<"Welcome!!!How can I help you??"<<endl;
		cout<<".................................."<<endl;
		cout<<"\n";
		
		// define products
	int  product;
	cout<<"Product A : enter 1"<<endl;
	cout<<"Product B : enter 2"<<endl;
	cout<<"Product C : enter 3"<<endl;
	cout<<"Product D : enter 4"<<endl;
	cout<<"Enter the desired product number:";
	cin>>product;
	cout<<"\n";
	while (!(product>=1 && product<=4)){
		cout<<"Invalid product code. Re enter it"<<endl;		
		cout<<"Product A : enter 1"<<endl;
	    cout<<"Product B : enter 2"<<endl;
	    cout<<"Product C : enter 3"<<endl;
	    cout<<"Product D : enter 4"<<endl;
	    cout<<"Enter the desired product number again:";
	    cin.clear();
	    cin.ignore();
	    cin>>product;
	
		
	}
	switch (product){
		case 1:
			cout<<"The price of product A is Rs.50";
			price=A;
			break;
		case 2:
			cout<<"The price of product B is Rs.70";
			price=B;
			break;
		case 3:
			cout<<"The price of product C is Rs.40";
			price=C;
			break;
		case 4:
			cout<<"The price of product D is Rs.60";
			price=D;
			break;
	}
	cout<<"\n";
	cout<<"Please enter the payment through the slot(Rs.1,2,5,10 coins are only accepted:"<<endl;
	cout<<"Number of Rs.1 coins:";
	cin>>p;
	p_=p_+p;
	cout<<"Numver of Rs.2 coins: ";
	cin>>q;
	q_=q_+q;
	cout<<"Number of Rs.5 coins:";
	cin>>r;
	r_=r_+r;
	cout<<"Number of Rs.10 coins:";
	cin>>s;
	s_=s_+s;
	Utotal=(p*1)+(q*2)+(r*5)+(s*10);//entire amount user input
	if(Utotal<price){
		cout<<"money is insufficient to do this transaction"<<endl;
		cout<<"again enter the payment:"<<endl;
		cout<<"Number of Rs.1 coins:";
	    cin>>p;
	    p_=p_+p;
	    cout<<"Numver of Rs.2 coins: ";
	    cin>>q;
	    q_=q_+q;
	    cout<<"Number of Rs.5 coins:";
	    cin>>r;
	    r_=r_+r;
	    cout<<"Number of Rs.10 coins:";
	    cin>>s;
	    s_=s_+s;
	}
	balance=Utotal-price;
    cout<<"Your balance is:"<<balance<<endl;
	cout<<"\n";
	
	int t;
	t=balance/10;
	cout<<"Rs.10:"<<t<<endl;
	s_=s_-t;
	balance=balance%10;
	
	t=balance/5;
	cout<<"Rs.5:"<<t<<endl;
	r_=r_-t;
	balance=balance%5;
	
	t=balance/2;
	cout<<"Rs.2:"<<t<<endl;
	q_=q_-t;
	balance=balance%2;
	
	t=balance/1;
	cout<<"Rs.1:"<<t<<endl;
	p_=p_-t;
	balance=balance%1;
	cout<<"\n";
	cout<<"collect your balance through the coin slot"<<endl;
	cout<<"\n";
	cout<<"Thank you"<<endl;
	cout<<"\n";
	
	r1=r1+p_;
	r2=r2+q_;
	r5=r5+r_;
	r10=r10+s_;
	
	if(r1>100){
		of1=of1+(r1-100);
		
	}
	if(r2>100){
		of2=of2+(r2-100);
		
	}
	if(r5>100){
		of5=of5+(r5-100);
		
	}
	if(r10>100){
		of10=of10+(r10-100);
		
	}

	cout<<"Enter password to terminate, If you are a customer enter 0 for password to continue"<<endl;
	cout<<"password:"<<endl;
	int password;
	cin>>password;
	if(password==0){
	//	break;
	}
	if (password==12345){
		cout<<"Coins in each bin:"<<endl;
		cout<<"...................."<<endl;
		cout<<"Number of remaining Coins Rs.1:"<<r1<<endl;
		cout<<"Number of remaining Coins Rs.2:"<<r2<<endl;
		cout<<"Number of remaining Coins Rs.5:"<<r5<<endl;
		cout<<"Number of remaining Coins Rs.10:"<<r10<<endl;
		cout<<"\n";
		cout<<"\n";
		
		cout<<"Coins in each overflow bin:"<<endl;
		cout<<"................................"<<endl;
		cout<<"Number of coins Rs.1:"<<of1<<endl;
		cout<<"Number of coins Rs.2:"<<of2<<endl;
		cout<<"Number of coins Rs.5:"<<of5<<endl;
		cout<<"Number of coins Rs.10:"<<of10<<endl;
	}
	else{
		cout<<"Password is incorrect re enter the password :"<<endl;
		cin>>password;
		cout<<"Coins in each bin:"<<endl;
		cout<<"...................."<<endl;
		cout<<"Number of remaining Coins Rs.1:"<<r1<<endl;
		cout<<"Number of remaining Coins Rs.2:"<<r2<<endl;
		cout<<"Number of remaining Coins Rs.5:"<<r5<<endl;
		cout<<"Number of remaining Coins Rs.10:"<<r10<<endl;
		cout<<"\n";
		cout<<"\n";
		
		cout<<"Coins in each overflow bin:"<<endl;
		cout<<"................................"<<endl;
		cout<<"Number of coins Rs.1:"<<of1<<endl;
		cout<<"Number of coins Rs.2:"<<of2<<endl;
		cout<<"Number of coins Rs.5:"<<of5<<endl;
		cout<<"Number of coins Rs.10:"<<of10<<endl;
	}
	break;
		
	
	
	
	}
	
	return 0;
}
