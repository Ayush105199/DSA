class Solution {
public:
    int myAtoi(string s) {
    int n = s.length();
    int i = 0, sign = 1;
    long result = 0;

    // 1. Ignore leading whitespace
    while (i < n && s[i] == ' ') {
        i++;
    }

    // 2. Handle optional '+' or '-' sign
    if (i < n && (s[i] == '+' || s[i] == '-')) {
        sign = (s[i] == '-') ? -1 : 1;
        i++;
    }

    // 3. Process digits and handle overflow
    while (i < n && isdigit(s[i])) {
        result = result * 10 + (s[i] - '0');

        // Check for overflow before multiplying by `sign`
        if (result * sign > INT_MAX) return INT_MAX;
        if (result * sign < INT_MIN) return INT_MIN;

        i++;
    }

    return result * sign;
}
};