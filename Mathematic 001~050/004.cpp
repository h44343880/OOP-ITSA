#include<iostream>
#include<iomanip>
#include<string>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;

int main(){
    int first, second;
    cin>>first>>second;
    int result = first/second, remain = first%second;
    if(remain < 0){
        if(second > 0){
            result--;
            remain += second;
        }else{
            result++;
            remain -= second;
        }
    }
    cout<<first<<"+"<<second<<"="<<first+second<<"\n";
    cout<<first<<"*"<<second<<"="<<first*second<<"\n";
    cout<<first<<"-"<<second<<"="<<first-second<<"\n";
    cout<<first<<"/"<<second<<"="<<result<<"..."<<remain<<"\n";
}