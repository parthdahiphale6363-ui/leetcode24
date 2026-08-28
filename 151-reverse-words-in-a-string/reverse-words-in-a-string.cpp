class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string word;
        string ans = "";

        while (ss >> word) {
            if (ans == "") {
                ans = word;
            } else {
                ans = word + " " + ans;
            }
        }

        return ans;
    }
};