#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a value: ";
    cin>>n;
    string s = to_string(n);
    cout<<s.length();
}