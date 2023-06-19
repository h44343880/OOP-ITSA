#include<iostream>
#include<stack>
using namespace std;

int main(){
    int num;
    char chr;
    stack<int> s;
    while(cin>>num){
        chr = cin.get();
        s.push(num);
        if(chr == '\n' || chr == EOF){
            int temp;
            while(!s.empty()){
                temp = s.top();
                s.pop();
                cout<<temp;
                if(!s.empty())
                    cout<<" ";
            }
            cout<<"\n";
        }
    }
}