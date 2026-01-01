#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[] = {1,12,8,9,6,5,7,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    int mx = INT_MIN;
    int mn = INT_MAX;
    for(int i = 0; i<n; i++){
        mx = max(mx,arr[i]);
        mn = min(mn,arr[i]);
    }
    cout<<mx<<" "<<mn;
}