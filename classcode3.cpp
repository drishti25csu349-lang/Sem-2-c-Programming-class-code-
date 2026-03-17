
#include<iostream>
#include<string>
using namespace std;
class cars{
    private :
    string brand;
    int price;
    public:
    cars(string b,int p){
        brand = b;
        price = p;
    };
    void display(){
        cout<< "brand : "<<brand << "price :" << price << endl;
    };
};
int main(){
    cars obj("TATA",340000);
    obj.display();
    cars obj2("DEFENDER",1000000);
    obj2.display();
    return 0 ;
}
