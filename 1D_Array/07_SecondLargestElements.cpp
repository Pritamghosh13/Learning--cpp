#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int n;
    
    cout<<"Enter array size: ";
    cin>>n;
    vector<int> arr(n);
    int mx = INT_MIN;
    int smx = INT_MIN;
    for(int i = 0; i<n; i++){
    cin>>arr[i];

    }
    for(int i = 0; i<n; i++){
        mx = max(mx,arr[i]);
        
    }
    for(int i = 0; i<n; i++){
        if(smx<arr[i] && arr[i]!=mx){
            smx = arr[i];
        }
      
    }
      cout<<mx<<" "<<smx;
}