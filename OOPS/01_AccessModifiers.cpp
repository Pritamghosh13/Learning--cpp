#include<iostream>
using namespace std;
class student{
    public:
    int roll;
    string name;

    student(int r, string n, float m){
        roll = r;
        name = n;
        marks = m;
    }

    float getmarks(){
        return marks;
    }

    void setmarks(float m){
        marks = m;
    }
    private:
    float marks;
};

int main(){
    student s1(25,"Pritam",98.5);
    cout<<s1.getmarks();
}
