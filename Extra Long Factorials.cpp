void extraLongFactorials(int n) {
    int len = 1;
    vector<short> num{1};
    for(int i = 1; i <= n; i++){
        int c = 0;
        for(int j = 0; j < len; j++){
            int k = num[j] * i + c;
            num[j] = k % 10;
            c = k / 10;
        }
        while(c){
            num.push_back(c % 10);
            c /= 10;
            len++;
        }
    }
    for(int i = num.size() - 1; i >- 1; i--){
        cout << num[i];
    }
}
