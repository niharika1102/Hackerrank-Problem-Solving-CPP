int countingValleys(int steps, string path) {
    int sea = 0, valley = 0;
    for (int i = 0; i < path.size(); i++) {
        if (path[i] == 'U') {
            sea++;
            if (sea == 0) {
                valley++;
            }
        }
        if (path[i] == 'D') {
            sea--;
        }
    }
    return valley;  
}
