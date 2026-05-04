#include <iostream>
using namespace std;

//Brute
void printSubarray(int arr[],int n){
    
int maxSum=INT_MIN;
    for(int start=0;start<n;start++){
        for(int end=start;end<n;end++){
              int currSum=0;
            for(int i=start;i<=end;i++){
                currSum+=arr[i];
            }
             maxSum=max(maxSum,currSum);
        }
    } cout<<maxSum;
}

int  main(){
    int arr[4]={1,2,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    printSubarray(arr,n);
}

//