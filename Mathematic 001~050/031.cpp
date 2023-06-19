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
        int sum = 0, now = 1;
        while(6 * now < num){
            sum += 6 * now;
            now += 2;
        }
        cout<<sum<<endl;
    }
}