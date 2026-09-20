class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        mp_s = [0 for i in range(0,26)]
        mp_t = [0 for i in range(0,26)]
        a_ord = ord('a')
        if len(s) != len(t):
            return False
        for c1, c2 in zip(s,t):
            mp_s[ord(c1) - a_ord] += 1
            mp_t[ord(c2) - a_ord] += 1
        for i in range(0,26):
            print(mp_s[i], end = ' ')
            if mp_s[i] != mp_t[i]:
                return False
        else:
            return True
        