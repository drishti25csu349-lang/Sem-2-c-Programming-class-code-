
#include<iostream>
#include<string>
using namespace std;
class rect{
    private:
    int length;
    int breadth;
    int area;
    public:
    rect(int l,int b){
        length = l;
        breadth = b;
    };
    void areas(){
        area = length*breadth;
    };
    void display (){
        cout <<"area:"<< area<<endl;
    };
};
int main(){
   rect obj(3,5);
   obj.areas();
   obj.display();
    return 0 ;
}
