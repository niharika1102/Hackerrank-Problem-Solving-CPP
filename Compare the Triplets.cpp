vector<int> compareTriplets(vector<int> a, vector<int> b) {
    int alice  = 0, bob = 0;
    
    for (int i = 0; i < a.size(); i++) {
        if (a[i] < b[i]) {
            bob++;
        }
        else if (b[i] < a[i]) {
            alice++;
        }
    };
    
    return vector<int> {alice, bob};
};
