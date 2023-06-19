#include<iostream>
#include<iomanip>
#include<string>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;

int main(){
    int num;
    cin>>num;
    for(int i = 1; i <= num; i++){
        cout<<i<<"*"<<i<<"="<<i*i<<endl;
    }   
}