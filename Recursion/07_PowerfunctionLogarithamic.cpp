#include <iostream>
using namespace std;
int power(int a, int b){
    if(b==0) return 1;  //base
    int halfpower = power(a,b/2);
    if(b%2==0){
        return halfpower*halfpower;
    }
    else{
        return a* halfpower * halfpower;
    }

}
int main(){
    int a, b;
    cout<<"Enter value of base: ";
    cin>>a;
    cout<<"Enter value of power: ";
    cin>>b;
    cout<<power(a,b);
}