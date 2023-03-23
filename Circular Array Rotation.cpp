vector<int> circularArrayRotation(vector<int> a, int k, vector<int> queries) {
        for (int i = 0; i < k; i++) {
            int last = a.back();
            a.pop_back();
            a.insert(a.begin(), last);
        }
    
    vector<int> res;
    
    for (int i = 0; i < queries.size(); i++) {
        res.push_back(a[queries[i]]);
    }
    
    return res;
}
