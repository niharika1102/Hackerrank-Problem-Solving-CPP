long repeatedString(string s, long n) {
    long result = 0;
    long count = 0;
    long sSize = s.size();
    long full = floor(n / sSize);
    long mod = n % sSize;
    
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'a') {
            count++;
        }
        if (i + 1 == mod) {
            result += count;
        }
    }

    return result + count * full;
}
