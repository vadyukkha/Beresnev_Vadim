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
};

int main(){
    Solution solve;
    cout << solve.factorial(5) << endl;
    return 0;
}
