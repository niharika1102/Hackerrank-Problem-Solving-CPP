vector<int> breakingRecords(vector<int> scores) {
    int min = scores[0];
    int max = scores[0];
    int minCount = 0;
    int maxCount = 0;
    
    for (int i = 1; i < scores.size(); i++) {
        if (scores[i] > max) {
            maxCount++;
            max = scores[i];
        }
        else if (scores[i] < min) {
            minCount++;
            min = scores[i];
        }
    }
    
    vector <int> r = {maxCount, minCount};
    return r;
}
