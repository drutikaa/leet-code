int maxProfit(int* prices, int pricesSize) {
    int total_profit = 0;

    for (int i = 1; i < pricesSize; i++){
        if (prices[i] > prices[i-1]){
            total_profit += prices[i] - prices[i-1];
        }
    }

    return total_profit;
}
