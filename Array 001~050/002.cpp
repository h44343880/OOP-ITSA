#include<iostream>
#include<stack>
using namespace std;

int main(){
    int num;
    stack<int> s;
    for(int i = 0; i < 6; i++){
        cin>>num;
        s.push(num);
    }
    while(!s.empty()){
        num = s.top();
        s.pop();
        if(!s.empty())
            cout<<num<<" ";
        else
            cout<<num<<"\n";
    }
}