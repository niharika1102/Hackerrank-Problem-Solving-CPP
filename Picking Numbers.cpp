int pickingNumbers(vector<int> a) {
    sort(a.begin(),a.end());

    int ans = 0;
    int n = a.size();
    for (int i = 0; i < n; i++) {
        int curr = a[i];
        int count1 = count(a.begin(), a.end(), curr) + count(a.begin(), a.end(), curr + 1);
        ans = max(ans, count1);
    }
    return ans;
}
