void miniMaxSum(vector<int> arr) {
    long long maxi = 0, mini = 0;
    for(int i = 0; i < 5; i++){
        cin>>arr[i];
    };
    sort(arr.begin(), arr.end());
    for(int i = 0; i < 5; i++){
        if(i < 4){
            mini += arr[i];
        }
        if(i > 0){
            maxi += arr[i];
        }
    }
    cout<<mini<<" "<<maxi;
}
