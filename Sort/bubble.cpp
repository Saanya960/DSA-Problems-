#include <iostream>
using namespace std;


int print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int bubbleSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }  print(arr,n);
}


int main(){
    int arr[]={6,2,8,1};
    int n=sizeof(arr)/sizeof(arr[0]);
  bubbleSort(arr,n);
}