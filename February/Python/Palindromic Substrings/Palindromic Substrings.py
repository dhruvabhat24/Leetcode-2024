class Solution:
    def countSubstrings(self, s: str) -> int:
        res =0

        for i in range(len(s)):
            l = r = i
            while l >= 0 and r < len (s) and s[l] == s[r]:
                res +=1
                l -= 1
                r += 1

            l = i
            r = i + 1
            while l >= 0 and r < len (s) and s[l] == s[r]:
                res +=1
                l -= 1
                r += 1
            
        return res
