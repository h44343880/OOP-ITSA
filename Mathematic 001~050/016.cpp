#include<iostream>
#include<iomanip>
#include<string>
#include<vector>
#include<stack>
#include<algorithm>
#include<math.h>
using namespace std;

int main(){
    int x, y;
    double sum;
    while(cin>>x>>y){
        sum = x * x + y * y;
        if(sum <= 10000){
            cout<<"inside"<<endl;
        }else{
            cout<<"outside"<<endl;
        }
    }
}