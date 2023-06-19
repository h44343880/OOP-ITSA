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
        int now = 35;
        if(num >= now){
            cout<<now;
            now += 35;
            while(num >= now){
                cout<<" "<<now;
                now += 35;
            }
        }
        cout<<endl;
    }
}