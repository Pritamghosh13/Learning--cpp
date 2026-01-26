#include<iostream>
using namespace std;
class car{
    public:
    string name;
    int prize;
    int seats;

    car(string s, int p, int n){     
        name = s;
        prize = p;
        seats = n;
    }
};

int main(){
    car c1("bmw",7500000,5);
    car c2("Audi",5500000,6);
    cout<<c1.name<<" "<<c1.prize<<" "<<c1.seats<<endl;
    cout<<c2.name<<" "<<c2.prize<<" "<<c2.seats<<endl;
}