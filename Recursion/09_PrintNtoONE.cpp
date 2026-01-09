#include <iostream>
using namespace std;

void pritam(int x ){
    if(x==0) return;
    cout<<x<<" ";
    pritam(x-1);
}

int main(){
    int n;
    cout<<"Enter the value: ";
    cin>>n;
    pritam(n);
}