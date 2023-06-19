#include<iostream>
#include<iomanip>
#include<string>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;

int main(){
    int sec;
    cin>>sec;
    int day, hour, minute;
    day = sec / 86400;
    sec %= 86400;
    hour = sec / 3600;
    sec %= 3600;
    minute = sec / 60;
    sec %= 60;
    cout<<day<<" days\n";
    cout<<hour<<" hours\n";
    cout<<minute<<" minutes\n";
    cout<<sec<<" seconds\n";
}