#include<iostream>
#include<iomanip>
#include<string>
#include<vector>
#include<stack>
#include<algorithm>
#include<cmath>
using namespace std;

int main(){
    int num;
    while(cin>>num){
        int sum = 0, temp = num;
        for(int i = 0; i < 3; i++){
            sum += pow(temp % 10, 3);
            temp /= 10;
        }
        if(num == sum)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }   
}