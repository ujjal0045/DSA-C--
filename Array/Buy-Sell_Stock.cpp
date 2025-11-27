#include<iostream>
using namespace std;

void maxProfit(int price[], int n){
    int bestBuy[100000];
    bestBuy[0] = INT16_MAX;

    // Find best price to buy stock
    for(int i=1;i<n;i++){
        bestBuy[i] = min(bestBuy[i-1], price[i-1]);   
    }
    
    // Find best max prize to sell
    int maxProfit = 0;
    for(int i=0;i<n;i++){
        int curPrice = price[i] - bestBuy[i];
        maxProfit = max(maxProfit,curPrice);
    }
    cout<<"Max Profit : " <<maxProfit <<endl;
}

int main(){
    int stPrice[] = {7,1,5,3,6,4};  //{7,6,5,4,3,2,1};
    int n = sizeof(stPrice) / sizeof(int);
    maxProfit(stPrice,n);
}