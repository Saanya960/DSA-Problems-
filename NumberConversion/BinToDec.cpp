#include <iostream>
using namespace std;

int BinToDec(string bin) {
    int dec=0;
    int len=bin.length();
    int pow=1;
    for(int i=len-1;i>=0;i--){
        int bit =bin[i]-'0';
        bit=bit*pow;
        dec=dec+bit;
        pow*=2;
        
    }
    return dec;
}


int main() {
   
     cout<<BinToDec("10");
    return 0;
}