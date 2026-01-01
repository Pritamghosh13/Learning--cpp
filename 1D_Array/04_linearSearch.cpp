#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,12,8,9,6,5,5,7,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x;
    cout<<"Enter Target: ";
    cin>>x;
    bool found = false;

    for(int i = 0; i<n; i++){
        if(arr[i]==x){
            
            found = true;
            break;
        }
        
    }
    if(found){
        cout<<"Present";
    }
    else{
        cout<<"Not present";
    }
}