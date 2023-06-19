#include<iostream>
#include<iomanip>
#include<string>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;

int main(){
    double bot, height, ans;
    cin>>bot>>height;
    ans = bot * height / 2;
    cout<<fixed<<setprecision(1)<<ans<<"\n";
}