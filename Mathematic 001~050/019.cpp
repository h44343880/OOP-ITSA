#include<iostream>
#include<iomanip>
#include<cmath>
#include<string>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;

int main(){
    int num;
    double ans;
    cout<<fixed<<setprecision(1);
    while(cin>>num){
        if(num <= 800)
            ans = num * 0.9;
        else if(num > 800 && num < 1500)
            ans = num * 0.9 * 0.9;
        else
            ans = num * 0.9 * 0.79;
        ans = round(ans * 10) / 10.0;
        cout<<ans<<endl;
    }
}