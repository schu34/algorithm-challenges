//https://leetcode.com/problems/judge-route-circle/description/
class Solution {
public:
    bool judgeCircle(string moves) {
        int x = 0, y = 0;
        for(auto i = moves.begin(); i != moves.end(); i++){
            switch(*i){
                case 'U':
                    y++;
                    break;
                case 'R':
                    x++;
                    break;
                case 'L':
                    x--;
                    break;
                default:
                    y--;
            }
        }
        cout << "final x: " << x << "final y: " << y << endl;
        return x == 0 && y ==0;
    }
};