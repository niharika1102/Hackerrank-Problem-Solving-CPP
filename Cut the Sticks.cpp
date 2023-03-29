vector<int> cutTheSticks(vector<int> arr) {
    vector<int>ans;
    
    int n = arr.size();
    
    while(n){
        int minn = *min_element(arr.begin(), arr.end());
        ans.push_back(n);
        arr.erase(remove(arr.begin(), arr.end(), minn),arr.end());
        n = arr.size();
    }
    return ans;
}
