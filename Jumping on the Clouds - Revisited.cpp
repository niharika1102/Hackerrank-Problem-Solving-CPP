int jumpingOnClouds(vector<int> c, int k) {
    int energy = 100;
    int index = 0;
    
    do {
        index = (index + k) % c.size();
        energy = energy - 1;
        if (c[index] == 1) {
            energy = energy - 2;
        }
    }while (index != 0);
    return energy;
}
