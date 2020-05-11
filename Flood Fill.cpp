class Solution {
public:
    void paint(vector<vector<int>>& v,int source1,int source2,int oldColor,int newColor,vector<vector<int>>& trave )
    {
        if(source1<0 || source1>v.size()-1 || source2<0 || source2>v[0].size()-1)
            return;
        if(v[source1][source2]==oldColor && trave[source1][source2]!=1 )
        {
            trave[source1][source2]=1;
            v[source1][source2]=newColor;
            paint(v,source1,source2+1,oldColor,newColor,trave);
            paint(v,source1,source2-1,oldColor,newColor,trave);
            paint(v,source1+1,source2,oldColor,newColor,trave);
            paint(v,source1-1,source2,oldColor,newColor,trave);
            return;
        }
        else
            return;
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int oldColor=image[sr][sc];
        int n=image.size();
        int m=image[0].size();
        vector<vector<int> > trave(n , vector<int> (m, 0));
        paint(image,sr,sc,oldColor,newColor,trave);
        return image;
        
    }
};
