#include <iostream>
using namespace std;
void swap(int x, int y){
    cout<<"Enter 1st value: ";
    cin>>x;
    cout<<"Enter 2nd value: ";
    cin>>y;
    
    cout<<x<<" "<<y<<endl;
    x = x+y;
    y = x-y;
    x = x-y;
    cout<<x<<" "<<y<<endl;
}
int main(){
    int x,y;
    swap(x,y);
    

}