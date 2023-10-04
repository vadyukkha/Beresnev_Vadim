#include <iostream>
using namespace std;

class Solution {
public:
    int factorial(int x) {
        if (x == 1) return 1;
        return x * factorial(x-1);
    }
};

int main(){
    Solution solve;
    cout << solve.factorial(5) << endl;
    return 0;
}