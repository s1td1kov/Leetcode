const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();
    

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> Pascal;
        if (numRows == 0) {
            return Pascal;
        } else {
            Pascal = {{1}};
            while (--numRows) {
                vector<int> total(Pascal.size() + 1, 1);
                for (int i = 1; i < total.size() - 1; ++i) {
                    total[i] = Pascal.back()[i - 1] + Pascal.back()[i];
                }
                Pascal.push_back(total);
            }
            return Pascal;
        }
    }
};
