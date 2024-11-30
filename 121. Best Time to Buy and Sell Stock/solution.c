int maxProfit(int* prices, int pricesSize) {
    int profit = 0;
    int minPrice = 10000;
    for(int i = 0; i < pricesSize - 1; i++){
        if(prices[i] < minPrice) minPrice = prices[i];
        if(prices[i+1] - minPrice > profit) profit = prices[i+1] - minPrice;
    }
    return profit;
}