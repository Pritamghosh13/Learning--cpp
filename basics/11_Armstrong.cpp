#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a num: ";
    cin>>n;
    int s = n;
    int a = 0;
    while(n!=0){
        int ld = n%10;
        a = a + (ld*ld*ld);
        n= n/10;
        
    }
    cout<<a<<endl;
    if(a==s){
        cout<<"True"<<endl;
    }
    else{
        cout<<"Faluse"<<endl;
    }
    
}