#include <iostream>
using namespace std;

void pritam(int x ){
    if(x==0) return; //base
    pritam(x-1);   //call
    cout<<x<<" ";  //work
    
}  //work er age call hole reverse chole loop.

int main(){
    int n;
    cout<<"Enter the value: ";
    cin>>n;
    pritam(n);
}