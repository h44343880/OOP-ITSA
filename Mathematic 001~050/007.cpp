#include<iostream>
#include<iomanip>
#include<string>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;

int main(){
    int num;
    cout<<fixed<<setprecision(1);
    while(cin>>num){
        cout<<num<<" "<<num*num<<" "<<num*num*num<<"\n";
    }
}