#include<iostream>
#include<iomanip>
#include<string>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;

int main(){
    int num;
    while(cin>>num){
        if(num == 1){
            cout<<"NO\n";
            continue;
        }
        bool isPrime = true;
        for(int i = 2; i * i <= num; i++){
            if(num % i == 0){
                isPrime = false;
                break;
            }
        }
        if(isPrime)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}