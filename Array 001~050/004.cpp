#include<iostream>
#include<iomanip>
#include<string>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;

int main(){
    int cases, row, col;
    cin>>cases;
    while(cases--){
        cin>>row>>col;
        int matrix[row + 2][col + 2] = {0};
        for(int i = 1; i <= row; i++){
            for(int j = 1; j <= col; j++){
                cin>>matrix[i][j];
            }
        }
        for(int i = 1; i <= row; i++){
            for(int j = 1; j <= col; j++){
                if(matrix[i][j] && (!matrix[i - 1][j] || !matrix[i + 1][j] || !matrix[i][j - 1] || !matrix[i][j + 1]))
                    cout<<0;
                else
                    cout<<"_";
                cout<<" ";
            }
            cout<<"\n";
        }
        if(cases)
            cout<<"\n";
    }
}