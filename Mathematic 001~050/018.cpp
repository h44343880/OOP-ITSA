#include<iostream>
#include<iomanip>
#include<string>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;

int main(){
    int num;
    cin>>num;
    stack<int> s;
    for(int i = 0; i < 8; i++){
        s.push(num & 1);
        num >>= 1;
    }
    for(int i = 0; i < 8; i++){
        cout<<s.top();
        s.pop();
    }
    cout<<endl;
}