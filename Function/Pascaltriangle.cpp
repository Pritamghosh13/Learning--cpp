#include <iostream>
using namespace std;
int fac(int x){
    int f = 1;
    for(int i = 1; i<=x; i++){
        f = f*i;
    }
    return f;

}

int ncr(int n, int r){
    int a,b,c;
    
    a = fac(n);
    b = fac(r);
    c = fac(n-r);
    return a/(b*c);

}

int main(){
    int n;
    cout<<"Enter the value: ";
    cin>>n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j<= i; j++){
            cout<<ncr(i,j)<<" ";
        }
        cout<<endl;

    }

}
