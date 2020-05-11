class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        if(coordinates.size()<=2)
            return true;
        float x=coordinates[0][0];
        float y=coordinates[0][1];
        float x1=coordinates[1][0];
        float y1=coordinates[1][1];
        float z1=x1-x;
        float z2=y1-y;
        float res=z2/z1;
        for(int i=2;i<coordinates.size();i++)
        {
        float x11=coordinates[i][0];
        float y11=coordinates[i][1];
        float x22=coordinates[i-1][0];
        float y22=coordinates[i-1][1];
        float res1=x11-x22;
        float res2=y11-y22;
            if(res1==0)
                continue;
            float ans= res2/res1;
            if(ans!=res)
            {   
                return false;
            }
        }
            return true;
    
    }
};
/* here we used slope formula and checked if all the points have same slope or not*/
