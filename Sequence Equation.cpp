vector<int> permutationEquation(vector<int> p) {
    vector<int> temp, res;
    
    for(int i = 0; i < p.size(); i++)
    {
        for(int j = 0; j < p.size(); j++)
        {
            if(i+1 == p[j])
                temp.push_back(j+1);
        }
    }
    
    for(int i = 0; i < temp.size(); i++)
    {
        for(int j = 0; j < temp.size(); j++)
        {
            if(temp[i] == p[j])
                res.push_back(j+1);
        }
    }
    return res;
}
