#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;    
    cout<<"Enter array size: ";
    cin>>n;
    vector<int> arr(n);
    for(int i = 0; i<n; i++){
        cin>>arr[i];

    }
    for(int i = 0; i<n; i++){
        for(int j = i+1; i<n; i++){
            if(arr[i]==arr[j]){
                cout<<"Duplication Present";
                goto end;
            }
            
        }
        
    }
    cout<<"No Dulication Present";



    end:



}