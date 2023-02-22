int simpleArraySum(vector<int> ar) {
    //A variable sum, and using .size() instead of n
    int sum = 0;
    for (int i = 0; i < ar.size(); i++) {
        sum = sum + ar[i];
    };
    return sum;
};
