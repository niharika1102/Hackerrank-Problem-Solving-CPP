int reverse (int n) {
    int rev = 0;
    
    while (n != 0) {
        int rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    
    return rev;
}

int beautifulDays(int i, int j, int k) {
    int rev = 0;
    int count = 0;
    for (int it = i; it <= j; it++) {
        int revNum = reverse(it);
                
        int diff = abs(it - revNum);
        if (diff % k == 0) {
            count++;
        }
    }
    
    return count;
}
