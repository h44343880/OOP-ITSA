#include<iostream>
#include<iomanip>
#include<string>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;

int main(){
    double num;
    int ans;
    while(cin>>num){
        ans = num / 0.238 + 1;
        cout<<ans<<"\n";
    }
}