void Check(int a0, int a1, int r_q, int c_q, vector<pair<int,pair<int,int>>> &p){
    if (a0 - r_q == 0){
        if (a1 > c_q) { p.push_back({7,{a0,a1}});}
        if (a1 < c_q) { p.push_back({3,{a0,a1}});}
    } 
    else if (a1 - c_q == 0){
        if (a0 > r_q) { p.push_back({1,{a0,a1}});}
        if (a0 < r_q) { p.push_back({5,{a0,a1}});}
    }
    else if (a1 - c_q != 0 && a0 - r_q != 0 && 
            abs(a1 - c_q) == abs(a0 - r_q)){
        if (a0 > r_q && a1 > c_q){p.push_back({0,{a0,a1}});}
        if (a0 > r_q && a1 < c_q){p.push_back({2,{a0,a1}});}
        if (a0 < r_q && a1 > c_q){p.push_back({6,{a0,a1}});} 
        if (a0 < r_q && a1 < c_q){p.push_back({4,{a0,a1}});}
    }
}

int queensAttack(int n, int k, int r_q, int c_q, vector<vector<int>> obstacles) {
    int rowobs = obstacles.size();
    int colobs = obstacles[0].size();
    vector<pair<int,pair<int,int>>> p;
    for(int i = 0; i < rowobs; i++)
        Check(obstacles[i][0],obstacles[i][1],r_q,c_q, p);
    vector<int> arr(8,0);
    vector<pair<int,int>>short_p(8,{0,0});
    for (int i = 0; i < 8; i++){
        for (int j = 0; j < p.size(); j++){
            if (p[j].first == i) arr[i]++;
        } 
        
        int tempi = 0, tempj = 0;
        int tempindexi = 0, tempindexj = 0;
        int count = 0;
        for (int j = 0; j < p.size(); j++){
            if(p[j].first == i){
                if (arr[i] == 1)
                    short_p[i]= {p[j].second.first,p[j].second.second};              
                else if (arr[i] > 1){
                    if (count == 0)
                    {
                        tempindexi = p[j].second.first;
                        tempindexj = p[j].second.second;
                        tempi = abs(r_q - p[j].second.first);
                        tempj = abs(c_q - p[j].second.second);
                    } 
                    else{
                        if(abs(p[j].second.first - r_q) < tempi ||
                           abs(p[j].second.second - c_q) < tempj){
                            tempi = abs(r_q - p[j].second.first);
                            tempj = abs(c_q - p[j].second.second);
                            tempindexi = p[j].second.first;
                            tempindexj = p[j].second.second;
                        }
                    }
                    if (count == arr[i]-1){
                        short_p[i] = {tempindexi, tempindexj};
                        break;
                    }
                    count++;
                }
                else {continue;}
            }
        }
    } 
    p.clear(); p.shrink_to_fit();
    int totalMove = 0;
    for (int i = 0; i < short_p.size(); i++){
        if (short_p[i].first == 0 && short_p[i].second == 0){
            if (i == 0)
                {totalMove = totalMove + min(abs(n - c_q) , abs(n - r_q));}
            else if (i == 1)
                {totalMove = totalMove + abs(n - r_q);}
            else if (i == 2)
                {totalMove = totalMove + min(abs(n - r_q) , abs(1 - c_q)) ;}
            else if (i == 3)
                {totalMove = totalMove + abs(1 - c_q);}
            else if (i == 4)
                {totalMove = totalMove + min(abs(1 - c_q) , abs(1 - r_q));}
            else if (i == 5)
                {totalMove = totalMove + abs(1 - r_q);}
            else if (i == 6)
                {totalMove = totalMove + min(abs(1 - r_q) , abs(n - c_q));}
            else if (i == 7)
                {totalMove = totalMove + abs(n - c_q);}
        } else {
            if (short_p[i].first - r_q == 0)
                totalMove = totalMove + abs(short_p[i].second - c_q) - 1;
            else if (short_p[i].second - c_q == 0)
                totalMove = totalMove + abs(short_p[i].first - r_q) - 1;
            else if (short_p[i].first - r_q != 0 && short_p[i].second - c_q != 0)
                totalMove = totalMove + abs(short_p[i].first - r_q) - 1;
        }
    }
    return totalMove;
}
