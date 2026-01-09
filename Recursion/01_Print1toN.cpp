#include <iostream>
using namespace std;

void pritam(int x,int n ){
    if(x>n) return;      //base case
    cout<<x<<" ";        //work
    pritam(x+1,n);       //call
}                        //In all recursion this three element are have to present.


int main(){
    int n;
    cout<<"Enter the value: ";
    cin>>n;
    pritam(1,n);
}