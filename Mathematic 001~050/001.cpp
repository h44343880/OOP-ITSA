#include<iostream>
#include<iomanip>
#include<string>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;

int main(){
    double top, bot, height, ans;
    cout<<fixed<<setprecision(1);
    while(cin>>top>>bot>>height){
        ans = (top + bot) / 2 * height;
        cout<<"Trapezoid area:"<<ans<<"\n";
    }
}