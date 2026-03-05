#include<iostream>
#include<algorithm>
using namespace std;
class area{
    private :
    int area;
    public:
    int  data(int base,int height){
area = 0.5 * base * height;
return area;
    }
    
};

    int main(){
        int base,height;
        cout<<"enter the base ";
        cin>>  base;
         cout<<"enter the height ";
        cin>> height;
        area obj;
        int result = obj.data(height,base);
         cout<<"Area is "<<result; 


    }

