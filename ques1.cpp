#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n = 3 ;
    double sum = 0;
    double avg = 0;
    vector<int>arr(n);
    for (int i = 1 ;i< n;i++){
        cin >> arr[i];

    }
    for (int j = 0 ; j<n;j++){
        sum = sum + arr[j];
       
    }
     avg = sum/3;
   cout << avg ;

}
