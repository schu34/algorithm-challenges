
// https://leetcode.com/problems/self-dividing-numbers/description/
bool good(int n){
    vector<int> digits;
    int nn = n;
    while(n){
        digits.push_back(n%10);
        n/=10;
    }
    
    for(auto it = digits.begin(); it != digits.end(); it++){
        if(*it == 0 || nn % *it){
            return false;
        }
    }
    
    return true; 
}

class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ret;
        for(int i  = left; i <= right; i++){
            if(good(i)){
                ret.push_back(i);
            }
        }
        return ret;
    }
};


