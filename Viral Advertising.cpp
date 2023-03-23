int viralAdvertising(int n) {
    int shared = 5;
    int likes;
    int cum = 0;
    
    for (int i = 1; i <= n; i++) {
        likes = shared / 2;
        shared = likes * 3;
        cum = cum + likes;
    }
    
    return cum;
}
