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
        for(int i = num - 1; i > 1; i--){
            bool flag = true;
            for(int j = 2; j * j <= i; j++){
                if(i % j == 0){
                    flag = false;
                    break;
                }
            }
            if(flag){
                cout<<i<<endl;
                break;
            }
        }
    }
}