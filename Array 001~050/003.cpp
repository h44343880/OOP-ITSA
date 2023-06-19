#include<iostream>
#include<iomanip>
#include<string>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;

int main(){
    int num, ans = 0;
    for(int i = 0; i < 6; i++){
        cin>>num;
        ans += num * num * num;
    }
    cout<<ans<<endl;
}