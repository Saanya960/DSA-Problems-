#include <iostream>
using namespace std;


string DecToBin(int dec){
    if(dec==0) return "0";
    int n=dec;
    string bin="";
    while(n>0){
      if(n%2==1){
        bin='1'+bin;
      } else {
        bin='0'+bin;
      }
      n/=2;
       
    }
    return bin;
}
int main() {
    cout<<DecToBin(2);
    return 0;
}