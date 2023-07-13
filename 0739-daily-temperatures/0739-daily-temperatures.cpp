class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& arr) {
        vector<int> v;
        stack<int> s;

        for (int i = arr.size() - 1; i >= 0; i--) {
            while (!s.empty() && arr[s.top()] <= arr[i]) {
                s.pop();
            }

            if (s.empty()) {
                v.push_back(0);
            } else {
                v.push_back(s.top());
            }

            s.push(i);
        }

        reverse(v.begin(), v.end());

        for (int i = 0; i < v.size(); i++) {
            if (v[i] != 0) {
                v[i] = v[i]-i;
            }
        }

        return v;
    }
};
