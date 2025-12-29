#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value: ";
    cin>>n;
    int a = 0;
    while(n!=0){
        int ld;
        ld = n%10;
        a = a*10+ld;
        n = n/10;
        
    }
    cout<<a;
}
    