#include<iostream>
#include<iomanip>
#include<string>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;

int main(){
    int first, second, start, end;
    while(cin>>first>>second){
        start = min(first, second), end = max(first, second);
        cout<<(end - start + 1) * (first + second) / 2<<endl;
    }   
}