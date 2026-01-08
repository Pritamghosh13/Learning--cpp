#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter Row Number: ";
    cin>>a;
    cout<<"Enter Column Number: ";
    cin>>b;
    int arr[a][b];  //arr[row][column]
    for(int i = 0; i<a; i++){
        for(int j = 0; j<b; j++){
           arr[i][j]=10;
        }
    }
    for(int i = 0; i<a; i++){
        for(int j = 0; j<b; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}