#include <iostream>
using namespace std;



int main(){
    int arr[2][3]={{1,7,6},{7,8,2}};
    int n=2;
    int m=3;
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==7){
                count++;
            }
        }
    }
    cout<<count;
    return 0;
}