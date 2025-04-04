#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxProfit(vector<int>& prices) {
    int minPrice = prices[0];     // Minimum price so far (best day to buy)
    int maxProfit = 0;            // Maximum profit so far

    for (int i = 1; i < prices.size(); i++) {
        int profitToday = prices[i] - minPrice;     // Profit if we sell today
        maxProfit = max(maxProfit, profitToday);    // Update max profit
        minPrice = min(minPrice, prices[i]);        // Update min price
    }

    return maxProfit;
}

int main() {
    vector<int> prices = {7, 1, 5, 3, 6, 4};

    int profit = maxProfit(prices);

    cout << "Maximum Profit: " << profit << endl;  // Output: 5

    return 0;
}
