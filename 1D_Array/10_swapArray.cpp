#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Array Size: ";
    cin>>n;
    int arr[n];
    int brr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        brr[i]= arr[n-1-i];
        cout<<brr[i]<<" ";
    }
    
}
