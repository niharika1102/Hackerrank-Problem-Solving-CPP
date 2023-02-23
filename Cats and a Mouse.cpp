string catAndMouse(int x, int y, int z) {
    int diffCatA, diffCatB;
    
    diffCatA = abs(x - z);
    diffCatB = abs(y - z);
    
    if (diffCatB > diffCatA) {
        return "Cat A";
    }
    else if (diffCatB < diffCatA) {
        return "Cat B";
    }
    else {
        return "Mouse C";
    };
}
