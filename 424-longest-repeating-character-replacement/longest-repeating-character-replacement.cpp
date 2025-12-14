class Solution {
public:
    int characterReplacement(string s, int k) {
        int l = 0;
        int maxfreq = 0;               // Highest freq of a single char in current window
        int maxlen = 0;
        vector<int> freq(26, 0);       // Frequency table for A–Z

        for (int r = 0; r < s.size(); r++) {
            // Add current char to window
            freq[s[r] - 'A']++;

            // Update max frequency in the window
            maxfreq = max(maxfreq, freq[s[r] - 'A']);

            // Number of characters to change to make window uniform
            int changes = (r - l + 1) - maxfreq;

            // If more than k replacements needed → shrink window
            while (changes > k) {
                freq[s[l] - 'A']--;
                l++;
                changes = (r - l + 1) - maxfreq;  // Recalculate after shrinking
            }

            // Track the largest valid window
            maxlen = max(maxlen, r - l + 1);
        }

        return maxlen;
    }
};