class Solution {
public:
    void solve(string currStr, int openB, int closeB, int n,
               vector<string>& ans) {
        if (currStr.size() == n * 2) {
            ans.push_back(currStr);
            return;
        }

        if (openB > 0) {
            currStr.push_back('(');
            solve(currStr, openB - 1, closeB, n, ans);
            currStr.pop_back();
        }

        if (openB < closeB) {
            currStr.push_back(')');
            solve(currStr, openB, closeB - 1, n, ans);
            currStr.pop_back();
        }
    }

    vector<string> generateParenthesis(int n) {
        if (n == 1) {
            return {"()"};
        }
        vector<string> ans;
        solve("(", n - 1, n, n, ans);
        return ans;
    }
};