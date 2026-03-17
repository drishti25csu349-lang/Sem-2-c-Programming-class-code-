
#include<iostream>
#include<string>
using namespace std;
class table{
    private:
    string material;
    int legs ;
    int price ;
public:
table(){
   material= "wood";
 legs = 4;
     price = 5000;  
}
    table(string m,int p,int l){
        material = m;
        legs = l;
        price = p;
    };
    table(string m,int p){
 price = p;
  material = m;
    };
void display(){
cout<<" material:"<< material<<"\nprice: "<<price<<" \nlegs"<<legs<<endl;
};
};
int main(){
   table obj("plastic",3000,9);
   obj.display();
   table obj1("plastic",4000);
   obj1.display();
   table obj2;
   obj2.display();
    return 0 ;
}
