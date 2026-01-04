#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[] = {1,12,8,9,6,5,5,7,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x;
    cout<<"Enter the value: ";
    cin>>x;
    vector<int> v(2);
    for(int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
            if(arr[i]+arr[j]==x){
                v[0]=arr[i];
                v[1]=arr[j];
                
                cout<<v[0]<<" "<<v[1]<<endl;
                break;
            }
            
        }
        
    }

        
            
    
   
}

