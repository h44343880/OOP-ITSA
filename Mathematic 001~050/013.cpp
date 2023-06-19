#include<iostream>
#include<iomanip>
#include<string>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;

int main(){
    int hour, minute;
    cin>>hour>>minute;
    int start, end, cnt;
    start = 60 * hour + minute;
    cin>>hour>>minute;
    end = 60 * hour + minute;
    cnt = (end - start) / 30;
    int ans = 0;
    if(cnt <= 4){
        ans += 30 * cnt;
        cnt = 0;
    }else{
        ans += 120;
        cnt -= 4;
    }

    if(cnt <= 4){
        ans += 40 * cnt;
        cnt = 0;
    }else{
        ans += 160;
        cnt -= 4;
    }
    ans += 60 * cnt;
    cout<<ans<<endl;
}