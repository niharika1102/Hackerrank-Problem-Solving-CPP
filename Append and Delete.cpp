string appendAndDelete(string s, string t, int k) {
    int sn = s.length();
    int tn = t.length();
    int smallerLength = sn < tn ? sn : tn;
    int idx = smallerLength;
    for(int i = 0; i < smallerLength; i++){
        if(s[i] != t[i]){
            idx = i;
            break;
        }
    }
    int c = (sn + tn) - 2 * idx;
    if(c == k) return "Yes";
    else if(c < k && (2 * idx + c <= k)) return "Yes";
    else if(c < k && (k - c) % 2 == 0) return "Yes";
    else return "No";    
}
