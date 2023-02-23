int getMoneySpent(vector<int> keyboards, vector<int> drives, int b) {
    /*
     * Write your code here.
     
    */
    
    int ans = -1;
    
    for(int k : keyboards){
        for(int d : drives){
            if(k + d > ans && k + d <= b) {
               ans = k + d; 
            }
        }
    }
    return ans;
}
