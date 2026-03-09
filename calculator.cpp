#include<iostream>
using namespace std;
int add(int n ,int m){
int sum = m+n;
return sum;
}
int sub(int n,int m ){
  int diff = m-n;
}
int main(){
    int n,m ;
    int sum =0;
    char a,b;
    int choice;
    int diff;
cout << "Enter the number 1\n";
cin >> n;
cout<< "Enter the number 2\n";
cin >> m;
cout <<"enter the choice(1 for addition and 2 for subtraction) \n";
cin >> choice;
switch(choice){
    case 1:
sum=add(m,n);
cout<< " "<< sum;

case 2:
    diff=sub(m,n);
cout<< " "<< diff;

}
}
