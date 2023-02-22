int diagonalDifference(vector<vector<int>> arr) {
    int sumLToR = 0;
    int sumRtoL = 0;
    int diff;
    for (int i = 0; i < arr.size(); i++) {
        sumLToR = sumLToR + arr[i][i];
        int j = arr[i].size() - 1 - i;
        sumRtoL = sumRtoL + arr[i][j];
        diff = sumLToR - sumRtoL;
        if (diff < 0) {
            diff = diff * -1;
        }
    }
    return diff;
}
