#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a valid character: ";
    cin>> ch;
    if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z')){
        if(ch>='A' && ch<='Z')    //ASCII value of A to Z = (65-90);
        ch = ch + 32;
        else if(ch>='a' && ch<='z')   //ASCII value of a to z = (97-122);
        ch = ch - 32;


        cout<<"Converter character: "<<ch;

    }
    else{
        cout<<"Enter character is not valid.";
    }
}