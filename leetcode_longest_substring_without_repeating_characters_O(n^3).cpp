#include <bits/stdc++.h>
using namespace std;

bool checkReaptation(string& s, int start, int end ){
    vector<int> chars(128);
    while(start <= end){
        char c = s[start];
        chars[c]++;
        if(chars[c] > 1){
            return false;
        }
        start++;
    }
    return true;
}

int lengthOfLongestSubstring(string s){
    int n = s.length();
    int result = 0;
    for(int i = 0 ; i < n ; i++){
        for(int j = i ; j < n ; j++ ){
            if(checkReaptation(s, i, j)){
                result = max(result, j-i+1);
            }
        }
    }
    return result;
}
int main() {
    string s = "abcabcbb";
    cout << lengthOfLongestSubstring(s);

    return 0;
}
