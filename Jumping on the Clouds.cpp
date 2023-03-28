int jumpingOnClouds(vector<int> c) {
    int minJumps = 0, i = 0;
    
    while (i < c.size() - 1) {
        if (c[i + 2] == 0) {
            i = i + 2;
        }
            
        else {
            i++;
        }
        
        minJumps++;
    }
    
    return minJumps;
}
