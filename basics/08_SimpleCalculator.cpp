#include <iostream>
using namespace std;
int main(){
    float a;
    cin>>a;
    char ph;
    cin>>ph;
    float b;
    cin>>b;
    if(ph=='+') cout<<a+b;
    if(ph=='-') cout<<a-b;
    if(ph=='*') cout<<a*b;
    if(ph=='/') cout<<a/b;

}