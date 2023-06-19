#include<iostream>
#include<iomanip>
#include<string>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;

int main(){
    long long int num, result = 1;
    while(cin>>num){
        if(num > 31){
            cout<<"Value of more than 31\n";
        }else{
            result <<= num;
            cout<<result<<"\n";
        }
        result = 1;
    }   
}