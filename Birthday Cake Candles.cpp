int birthdayCakeCandles(vector<int> candles) {
    sort(candles.begin(), candles.end());
    
    int count = 1;
    int sizeArray = candles.size();
    
    for (int i = 0; i < sizeArray - 1; i++) {
        
        if (candles[i] == candles[sizeArray - 1]) {
            count++;
        };
    };
    
    return count;
};
