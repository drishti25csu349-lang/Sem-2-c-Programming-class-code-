#include<iostream>
using namespace std;
60int main(){
int marks[5];
int total = 0;
double  percentage;
for(int i = 0 ;i<5;i++){
    cout  <<"Enter the marks(out of 100) : ";
    cin >> marks[i];
    total = total + marks[i];
    percentage = (total/500)*100;
}
cout<<"total percentage\n"<<percentage;
cout << "total marks\n"<<total;
return 0 ;
