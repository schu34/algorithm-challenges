//https://leetcode.com/problems/1-bit-and-2-bit-characters/description/
class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        bool ret = true;
        for(auto it = bits.begin(); it != bits.end(); it++){
            if(*it == 1){
                it++;
                ret = false;
            } else {
                ret = true;
            }
        }
        return ret;
    }
};