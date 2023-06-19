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
        cout<<num * 9 / 5 + 32<<"\n";
    }   
}