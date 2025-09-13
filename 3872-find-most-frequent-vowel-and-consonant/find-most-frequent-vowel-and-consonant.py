class Solution:
    def maxFreqSum(self, s: str) -> int:
        n = len(s)
        cv = 0   # max vowel freq
        cc = 0   # max consonant freq
        freq = {}

        vowels = {'a', 'e', 'i', 'o', 'u'}  

        for ch in s:
            if ch not in freq:
                freq[ch] = 0
            freq[ch] += 1
            if ch in vowels:
                cv = max(cv, freq[ch])
            else:
                cc = max(cc, freq[ch])

        return cc + cv


        