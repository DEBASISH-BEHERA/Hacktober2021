#include <bits/stdc++.h>
using namespace std;

string longestPalindrome(string s) {
    int res = 0;
    int low=0, high=-1;
    for(int i=0; i<s.length(); i++){
        int l=i, k=i;
        while(l>=0 and k<s.length() and s[l] == s[k]){
            if(res < k-l+1){
                res = k-l+1;
                low = l, high = k;
            }
            l--; k++;
        }

        l=i, k=i+1;
        while(l>=0 and k<s.length() and s[l] == s[k]){
            if(res < k-l+1){
                res = k-l+1;
                low = l, high = k;
            }

            l--; k++;
        }
    }
    string ans;
    for(int i=low; i<=high; i++) ans.push_back(s[i]);

    return ans;
}
