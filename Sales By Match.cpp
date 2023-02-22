int sockMerchant(int n, vector<int> ar) {
    int count = 0;
    int b[100] = {0};
    for(int i : ar){
        b[i]++;
    }
    for(int i = 0; i < 100; i++){
        if(b[i] % 2 != 0){
            count++;
        }
    }
    return (ar.size() - count) / 2;
}
