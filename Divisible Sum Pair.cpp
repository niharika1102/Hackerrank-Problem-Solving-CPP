int divisibleSumPairs(int n, int k, vector<int> ar) {
    int count = 0;
    for (int i = 0; i < ar.size() - 1; i++) {
        for (int j = i + 1; j < ar.size(); j++) {
            int sum = ar[i] + ar[j];
            if (sum % k == 0) {
                count++;
            } 
        }
    }
    return count;
};
