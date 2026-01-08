#include<iostream>
#include<climits>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter Row Number: ";
    cin>>a;
    cout<<"Enter Column Number: ";
    cin>>b;
    int arr[a][b];
    for(int i = 0; i<a; i++){
        for(int j = 0; j<b; j++){
           
            cin>>arr[i][j];
        }
    }
    int mx  = INT_MIN;
    
    for(int i = 0; i<a; i++){
        for(int j = 0; j<b; j++){
            mx = max(mx,arr[i][j]);

        }
    }
    cout<<"Maximun value: "<<mx;
}