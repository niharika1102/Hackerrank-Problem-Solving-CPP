int findDigits(int n) {
    int temp = n, count = 0;
    
    while (temp) {
        int rem = temp % 10;
        if (rem != 0 && n % rem == 0) {
            count++;
        }
        temp = temp / 10;
    }
    return count;
}
