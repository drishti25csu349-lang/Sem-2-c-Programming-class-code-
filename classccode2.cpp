
#include<iostream>
#include<string>
using namespace std;
class student{
    private:
    string name;
    int marks;
    public:
    student(string n,int m){
        name = n;
        marks = m;

    };
    void display(){
        cout << "name\t" << name << " marks\t"<< marks <<endl;

    };

};
int main(){
    student acc1("rahul",34);
    acc1.display();
    return 0;

}
