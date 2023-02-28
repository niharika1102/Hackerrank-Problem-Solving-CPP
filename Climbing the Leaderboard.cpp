vector<int> climbingLeaderboard(vector<int> ranked, vector<int> player) {
    vector<int> history;
    history.resize(player.size());
    int rank =0, chek = -1;
    int j = player.size() - 1;
    for (int i = 0; i < ranked.size()&&j > -1; i++) {

        if (ranked[i] != chek) {
            chek = ranked[i];
            rank++;
            while ((player[j] >= chek) && (j >-1)) {
                history[j--] = rank;
            }
        }
    }
    rank++;
    while (j > -1) {
        history[j--] = rank;
    }
    return history;
}
