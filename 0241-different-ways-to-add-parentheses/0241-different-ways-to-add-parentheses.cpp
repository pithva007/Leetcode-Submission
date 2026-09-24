class Solution {
public:
    vector<int> diffWaysToCompute(string expression) {
        vector<int> ans;

        for (int i = 0; i < expression.size(); i++) {

            if (expression[i] == '+' ||
                expression[i] == '-' ||
                expression[i] == '*') {

                string left = expression.substr(0, i);
                string right = expression.substr(i + 1);
                vector<int> leftResults = diffWaysToCompute(left);
                vector<int> rightResults = diffWaysToCompute(right);
                for (int l : leftResults) {
                    for (int r : rightResults) {

                        if (expression[i] == '+') {
                            ans.push_back(l + r);
                        }
                        else if (expression[i] == '-') {
                            ans.push_back(l - r);
                        }
                        else {
                            ans.push_back(l * r);
                        }
                    }
                }
            }
        }
        if (ans.empty()) {
            ans.push_back(stoi(expression));
        }

        return ans;
    }
};