#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the year: ";
    cin>>n;
    if(n%400==0) {
        cout<<"Leap Year";
    }
    
    else if(n%100==0){
        cout<<"Not Leap Year";
    }
    else if(n%4==0){
        cout<<"Leap year";
    }
   else {
    cout<<"Not Leap Year";
   }

    
}