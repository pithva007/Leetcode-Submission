class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ans;
        int c3 = 0;
        int c5 = 0;
        for(int i = 1;i <= n;i++){
            c3++;
            c5++;
            if(c3 == 3 && c5 == 5)
            {
                ans.push_back("FizzBuzz");
                c3 = 0;
                c5 = 0;
            }
            else if(c3 == 3)
            {
                ans.push_back("Fizz");
                c3 = 0;
            }
            else if(c5 == 5)
            {
                ans.push_back("Buzz");
                c5 = 0;
            }
            else ans.push_back(to_string(i));

        }
        return ans;

    }
};