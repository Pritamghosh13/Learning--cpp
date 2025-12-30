#include <iostream>
using namespace std;

void swap(int x, int y){
    int temp = x;
    x = y;
    y = temp;
    cout<<"After swap the numbers:"<<x<<" "<<y;
}
int main(){
    int x,y;
    cout<<"Enter the first number: ";
    cin>>x;
    cout<<"Enter the second number: ";
    cin>>y;
    cout<<"Before swap the numbers:"<<x<<" "<<y<<endl;
    swap(x,y);


}
