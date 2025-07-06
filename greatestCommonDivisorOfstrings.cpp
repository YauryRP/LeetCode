#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    bool isDivisor(const string& s, const string& candidate) {
        int n = s.size(), m = candidate.size();
        if (n % m != 0) return false;
        string repeated = "";
        for (int i = 0; i < n / m; ++i) {
            repeated += candidate;
        }
        return repeated == s;
    }

    string gcdOfStrings(string str1, string str2) {
        int minLen = min(str1.size(), str2.size());
        for (int len = minLen; len > 0; --len) {
            string candidate = str1.substr(0, len);
            if (isDivisor(str1, candidate) && isDivisor(str2, candidate)) {
                return candidate;
            }
        }
        return "";
    }
};
int main() {
    Solution sol;
    string str1 = "ABCABC";
    string str2 = "ABC";
    string result = sol.gcdOfStrings(str1, str2);
    cout << "GCD of strings: " << result << endl; // Output: "ABC"
    return 0;
}