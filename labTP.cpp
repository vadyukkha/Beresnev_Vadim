#include <iostream>
using namespace std;

class Solution {
public:
    int factorial(int x) {
        if (x == 1) return 1;
        return x * factorial(x-1);
    }
    int sumDigitsOfNum(int x) {
        int res = 0;
        while (x!=0) {
            res += x%10;
            x/=10;
        }
        return res;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascalTriangle;
        if (numRows == 1) return {{1}};
        for (int i = 0; i < numRows; i++) {
            vector<int> row;
            for (int j = 0; j < i+1; j++) {
                if (i != j && j != 0) {
                    row.push_back(pascalTriangle[i-1][j-1] + pascalTriangle[i-1][j]);
                } else {
                    row.push_back(1);
                }
            }
            pascalTriangle.push_back(row);
        }
        return pascalTriangle;
    }
};

int main(){
    Solution solve;
    cout << solve.factorial(5) << endl;
    return 0;
}
