#include<iostream>
#include<iomanip>
#include<string>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;

int main(){
    long long int num, ans = 1;
    while(cin>>num){
        for(int i = 1; i <= num; i++){
            ans *= i;
        }
        cout<<ans<<endl;
        ans = 1;
    }
}