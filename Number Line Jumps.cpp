string kangaroo(int x1, int v1, int x2, int v2) {
    if (x1 + v1 == x2 + v2) {
        return "YES";
    }
    else if (x1 < x2 && v1 > v2) {
        while (x1 <= x2) {
            if (x1 + v1 != x2 + v2) {
                x1 = x1 + v1;
                x2 = x2 + v2;
            }
            else {
                return "YES";
            };
        }
    }
    return "NO";
}
