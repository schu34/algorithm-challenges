//https://leetcode.com/problems/number-of-1-bits/description/
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
         while(n){
            cout << n << endl;
            if(n%2){
                count++;
            }
            n  = n >> 1;
        }
        return count;
    }
};