#include <iostream>
using namespace std;
int fac(int x){
    int f = 1;
    for(int i = 1; i<=x; i++){
        f = f*i;
    }
    return f;

}

int main(){
    int a,b,c,n,r;
    cout<<"Enter the value of N: ";
    cin>>n;
    cout<<"Enter the value of R: ";
    cin>>r;
    a = fac(n);
    b = fac(r);
    c = fac(n-r);
    cout<<a/(b*c);

}