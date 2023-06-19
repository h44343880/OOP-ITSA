#include<iostream>
#include<iomanip>
#include<string>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;

int main(){
    double num;
    cout<<fixed<<setprecision(1);
    while(cin>>num){
        num *= num * 100;
        num = (int)(num + 5) / 10;
        num = num / 10;
        cout<<num<<"\n";
    }
}