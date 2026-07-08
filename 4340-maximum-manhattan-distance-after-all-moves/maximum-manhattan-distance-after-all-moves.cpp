class Solution {
public:
    int maxDistance(string moves) {
        int x=0,y=0,z=0;
        for(int i=0;i<moves.length();i++){
            if (moves[i]=='U'){
                y++;
            }
            if (moves[i]=='D'){
                y--;
            }
            if (moves[i]=='L'){
                x--;
            }
            if (moves[i]=='R'){
                x++;
            }
            if (moves[i]=='_'){
                z++;
            }
           
        }
        int Mac=abs(x)+abs(y)+z;
        return Mac;
    }
};