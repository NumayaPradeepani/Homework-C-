#include <iostream>
using namespace std;
 
struct Time {
  int hour;
  int mins;
  int secs;
};
 
Time findTimeDifference(Time t1, Time t2);
 
int main() {
    Time t1, t2, diff,inseconds;
     
    cout << "Enter first time hours"<<endl;
    cin >> t1.hour;
    //check range of hours
    if(t1.hour<0){
    	cout<<"Invalid Range"<<endl;
        cout<<"Again enter hours"<<endl;
        cin >> t1.hour;
	}
    	
    if (t1.hour>12){
    	cout<<"Invalid Range"<<endl;
        cout<<"Again enter hours"<<endl;
        cin >> t1.hour;
	}
    cout << "Enter first time minutes"<<endl;
    cin >> t1.mins;
    
    //check range of minutes
    if(t1.mins<0){
    	cout<<"Invalid Range"<<endl;
        cout<<"Again enter minutes"<<endl;
        cin >>t1.mins;
	}
    	
    if (t1.mins>60){
    	cout<<"Invalid Range"<<endl;
        cout<<"Again enter minutes"<<endl;
        cin >>t1.mins;
	}
    
    cout << "Enter first time seconds"<<endl;
    cin >> t1.secs;
    //check range of seconds
    if(t1.secs<0){
    	cout<<"Invalid Range"<<endl;
        cout<<"Again enter minutes"<<endl;
        cin >>t1.secs;
	}
    	
    if (t1.secs>60){
    	cout<<"Invalid Range"<<endl;
        cout<<"Again enter minutes"<<endl;
        cin >>t1.secs;
	}
    
    
    
    
    //second time
    cout << "Enter second time hours"<<endl;
    cin >> t2.hour;
    //check range of hours
    if(t2.hour<=0){
    	cout<<"Invalid Range"<<endl;
        cout<<"Again enter hours"<<endl;
        cin >> t2.hour;
	}
    	
    if (t2.hour>12){
    	cout<<"Invalid Range"<<endl;
        cout<<"Again enter hours"<<endl;
        cin >> t2.hour;
	}
    cout << "Enter second time minutes"<<endl;
    cin >> t2.mins;
    
    //check range of minutes
    if(t2.mins<=0){
    	cout<<"Invalid Range"<<endl;
        cout<<"Again enter minutes"<<endl;
        cin >>t2.mins;
	}
    	
    if (t2.mins>60){
    	cout<<"Invalid Range"<<endl;
        cout<<"Again enter minutes"<<endl;
        cin >>t2.mins;
	}
    
    cout << "Enter second time seconds"<<endl;
    cin >> t2.secs;
    //check range of seconds
    if(t2.secs<0){
    	cout<<"Invalid Range"<<endl;
        cout<<"Again enter minutes"<<endl;
        cin >>t2.secs;
	}
    	
    if (t2.secs>60){
    	cout<<"Invalid Range"<<endl;
        cout<<"Again enter minutes"<<endl;
        cin >>t2.secs;
	}
	
	
    diff = findTimeDifference(t1, t2);
    
    cout << "Difference = "<< diff.hour << ":" << diff.mins << ":" << diff.secs<<endl;
    cout << "Difference in seconds = "<< diff.hour*3600+diff.mins*60+diff.secs<<endl;
    return 0;
    
}
 
Time findTimeDifference(Time t1, Time t2){

 Time diff;
    if(t2.secs > t1.secs){
        --t1.mins;
        t1.secs += 60;
    }
 
    diff.secs = t1.secs - t2.secs;
    if(t2.mins > t1.mins) {
        --t1.hour;
        t1.mins += 60;
    }
     
    diff.mins = t1.mins-t2.mins;
    if(t2.hour > t1.hour) 
        
    diff.hour = t2.hour-t1.hour;    
    return diff;
}
