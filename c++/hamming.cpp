// https://leetcode.com/problems/hamming-distance/description/

class Solution {
public:
    int hammingDistance(int x, int y) {
        int z = x ^ y;
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
};