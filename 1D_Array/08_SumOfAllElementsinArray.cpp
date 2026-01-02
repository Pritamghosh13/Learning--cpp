#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Array size: ";
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int a = 0;
    for(int i = 0; i<n; i++){
        a = a + arr[i];
    
    
    }
    cout<<a;
}