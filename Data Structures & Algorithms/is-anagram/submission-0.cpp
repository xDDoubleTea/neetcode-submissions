class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> mp_s(26, 0);
        vector<int> mp_t(26, 0);
        for(char c : s){
            mp_s[(int)c - (int)'a']++;
        }
        for(char c : t){
            mp_t[(int)c - (int)'a']++;
        }
        for(int i = 0; i < 26; i++){
            if(mp_s[i] != mp_t[i]){
                return false;
            }
        }
        return true;
    }
};
