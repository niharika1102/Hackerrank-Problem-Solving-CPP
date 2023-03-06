int hurdleRace(int k, vector<int> height) {
    int max = height[0];
    for (int i = 0; i < height.size(); i++) {
        if (max < height[i]) {
            max = height[i];
        }
    }
    
    int potion;
    if (k < max) {
        potion = max - k;
    }
    else {
        potion = 0;
    }
    return potion;
}
