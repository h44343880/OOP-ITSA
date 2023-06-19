#include<iostream>
#include<iomanip>
#include<string>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;

int main(){
    int num, cnt;
    while(cin>>num){
        cnt = num / 3;
        cout<<cnt * (1 + cnt) * 3 / 2<<endl;
    }
}