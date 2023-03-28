int nonDivisibleSubset(int k, vector<int> s) {
    vector<int> freq(k,0);
    int res;
    for(int i = 0; i < s.size(); i++){
        freq[s[i] % k] += 1;
    }
    res = min (freq[0], 1);
    for(int i = 1; i <= (k / 2); i++){
        if(i != k - i){
            res += max (freq[i], freq[k - i]);
        }
        else{
            res += min (freq[i], 1);
        }
    }
    return res;
}
