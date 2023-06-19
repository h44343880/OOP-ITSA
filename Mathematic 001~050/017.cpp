#include<iostream>
#include<iomanip>
#include<string>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;

int main(){
    int first, second, remain;
    cin>>first>>second;
    while(second != 0){
        remain = first % second;
        first = second;
        second = remain;
    }
    cout<<first<<endl;
}