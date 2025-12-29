#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value: ";
    cin>>n;
    int a = 0;
    while(n!=0){
        n = n/10;
        a++;
    }
    cout<<a;
}