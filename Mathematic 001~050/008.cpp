#include<iostream>
#include<iomanip>
#include<string>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;

int main(){
    int num, first, second;
    cout<<fixed<<setprecision(1);
    while(cin>>first>>second){
        num = first + second;
        cout<<num*num<<"\n";
    }
}