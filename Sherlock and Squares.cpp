int squares(int a, int b) {
    int count = 0;
    int i = 1;
    while (i * i <= b) {
        if (i * i >= a && i * i <= b) {
            count++;
        }
        i++;
    }
    return count;
}
