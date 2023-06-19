#include<iostream>
#include<iomanip>
#include<string>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;

int main(){
    int num, ten, five;
    cin>>num;
    ten = num / 10;
    num -= 10 * ten;
    five = num / 5;
    num -= 5 * five;
    cout<<"NT10="<<ten<<"\n";
    cout<<"NT5="<<five<<"\n";
    cout<<"NT1="<<num<<"\n";
}