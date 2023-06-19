#include<iostream>
#include<iomanip>
#include<string>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;

int main(){
    double time, per_hour, ans = 0;
    while(cin>>time>>per_hour){
        if(time <= 60){
            ans += time * per_hour;
            time = 0;
        }else{
            ans += 60 * per_hour;
            time -= 60; 
        }

        if(time <= 60){
            ans += time * per_hour * 1.33;
            time = 0;
        }else{
            ans += 60 * per_hour * 1.33;
            time -= 60; 
        }
        ans += time * per_hour * 1.66;
        cout<<fixed<<setprecision(1)<<ans<<endl;
        ans = 0;
    }   
}