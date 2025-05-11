#include<iostream>
#include<vector>

using namespace std;

/* 

You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock
and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

 

Example 1:

Input: prices = [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.
Example 2:

Input: prices = [7,6,4,3,1]
Output: 0
Explanation: In this case, no transactions are done and the max profit = 0.
 



*/


//approach --> find min buy then profit(a[i]-minbuy) if profit > max profit update max profit
// and if a[i]< minbuy then update min buy

int maxProfit(vector<int>& prices) {

    int minBuy = prices[0];
    int maxprofit = 0;
    int profit = 0;

    for(int i=1;i<prices.size();i++){

        profit = prices[i] - minBuy;// calculate profit
        maxprofit = max(maxprofit,profit); // if profit > maxProfit update max profit
        minBuy = min(minBuy,prices[i]);// if current price < min buy update min buy

    }

    return maxprofit;
}

int main(){

    int n;

    vector<int> prices;

    cout<<"enter no of day : ";
    cin>>n;

    cout<<"enter prices at each day : ";
    for(int i=0;i<n;i++){
        int element;
        cin>>element;
        prices.push_back(element);
    }

    cout<<"prices at each day are : ";
    for(int i=0;i<n;i++){
        cout<<prices[i]<<" ";
    }cout<<endl;

    int maxprofit = maxProfit(prices);

    cout<<endl<<"max profit is : "<<maxprofit<<endl;


    return 0;
}