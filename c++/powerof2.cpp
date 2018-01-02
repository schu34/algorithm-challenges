// https://leetcode.com/problems/power-of-two/description/
#include <cstdlib>

int ham(int z){
    int count = 0;
     while(z){
        cout << z << endl;
        if(z%2){
            count++;
        }
        z  = z >> 1;
    }
    return count;
}


class Solution {
public:
    bool isPowerOfTwo(int n) {
        return n >= 0 && ham(n) == 1;
    }
};


