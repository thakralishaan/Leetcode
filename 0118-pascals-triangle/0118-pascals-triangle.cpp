
class Solution {
public:
    vector<vector<int>> generate(int rows){
       vector<vector<int>>ans;
        
        for (int i = 0; i < rows; ++i) {
        vector<int> s;
        for (int j = 0; j <= i; ++j) {
            if (j != 0 && j != i) {
                s.push_back(ans[i - 1][j] + ans[i - 1][j - 1]);
            } else {
                s.push_back(1);
            }
        }
        ans.push_back(s);
    }
    return ans;
}
};