#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int maxProfit(vector<int>& prices){
    vector<int> bestBuy(prices.size());
    bestBuy[0]=prices[0];
    for(int i=1;i<prices.size();i++){
       bestBuy[i]= min(bestBuy[i-1],prices[i]);
    }
    int maxProfit=0;
    for(int i=0;i<prices.size();i++){
    int currProfit=prices[i]-bestBuy[i];
     maxProfit=max(currProfit,maxProfit);}
        return maxProfit;
}

int main(){
    vector<int> prices={7,1,5,3,6,4};
    cout<<maxProfit(prices);
    return 0;
}