class Solution {
    bool same(char a, char b){
        if ('A' <= a && a <= 'Z') a = a - 'A' + 'a';
        if ('A' <= b && b <= 'Z') b = b - 'A' + 'a';
        return a == b;
    }
public:
    bool isPalindrome(string s) {
        int l = 0, r = s.size() - 1;
        while (l < r){
            while(l < r && !isalnum(s[l])) l++;
            while(l < r && !isalnum(s[r])) r--;
            //cout << s[l] << "\n" << s[r] << "\n";
            if(!same(s[l], s[r])) return false;
            l++;
            r--;
        }
        return true;
    }
};
