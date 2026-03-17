#include <iostream>
#include <string>
using namespace std;

class setdetails {
private:
   int ram= 0;
   int price = 0;
   string brand;
public:
   void laptop(string b, int r, int p) {
        brand = b;
        price = p;
        ram = r;
    }
   void  laptop(string b){
         brand = b;
         
    }
    void display() {
          cout << "brand name : " << brand << endl;
        cout << "ram\n " << ram << ": price" << price  << endl;
    }  
};
int main() {
    setdetails o1,o2;
    o2.laptop("Mac", 1, 20000);
    o1.laptop("intel");
    o1.display();
    o2.display();
    return 0; 
}
