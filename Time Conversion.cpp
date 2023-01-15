#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    int size = s.length(); string ans ="";
    if(s[size-2] == 'A') {
        if(s[0] == '1' && s[1] == '2'){
            ans = "00";
            for(int i =2; i<size-2; i++){
                ans += s[i];
            }
        } 
        else {
            for(int i =0; i<size-2; i++){
                ans += s[i];
            }
        }
    } 
    else {
        if(s[0] == '1' && s[1] == '2'){
            for(int i =0; i<size-2; i++){
                ans += s[i];
            }
        } 
        else {
            for(int i =0; i<size-2; i++){
                if(i == 0) s[i] = s[i] + 1;
                if(i == 1) s[i] = s[i] + 2;
                ans += s[i];
            }
        }
    }
    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
