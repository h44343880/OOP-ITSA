#include<iostream>
#include<iomanip>
#include<string>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;

int main(){
    int x, y;
    while(cin>>x>>y){
        if(x <= 100 && y <= 100){
            cout<<"inside"<<endl;
        }else{
            cout<<"outside"<<endl;
        }
    }
}