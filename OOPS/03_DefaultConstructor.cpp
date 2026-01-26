#include<iostream>
using namespace std;
class car{
    public:
    string name;
    int prize;
    int seats;

    car(string s, int p, int n){      //parameterised construtor , ata thakle alada kore nlormally initilation er jonno defalut constuctor lage.
        name = s;
        prize = p;
        seats = n;
    }
    car(){             //ata holo defalut constructor , normal intitilisation a ata lage, empty hoi vatore.

    }
};
void print (car s){
    cout<<s.name<<" "<<s.prize<<" "<<s.seats<<endl;
       
}

    int main(){
        car c1("suzuki",250000,5);   //parameteraised initialisation.

        car c2;                      //Normal initialisation.
        c2.name = "tyota";
        c2.prize = 650000;
        c2.seats = 8;

       print(c1);
       print(c2);
    }
