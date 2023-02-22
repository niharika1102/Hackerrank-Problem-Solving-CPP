void plusMinus(vector<int> arr) {
    double plus = 0.0;
    double minus = 0.0;
    double zero = 0.0;
    
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] > 0) {
            plus++;
        }
        else if (arr[i] == 0) {
            zero++;
        }
        else if (arr[i] < 0) {
            minus++;
        }; 
    };
    
    cout << fixed;
    
    float plusRatio = plus / arr.size();
    cout << setprecision(6) << plusRatio << endl;
    
    float minusRatio = minus / arr.size();
    cout << setprecision(6) << minusRatio << endl;
    
    float zeroRatio = zero / arr.size();
    cout << setprecision(6) << zeroRatio << endl;
}
