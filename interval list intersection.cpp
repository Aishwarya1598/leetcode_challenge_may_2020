class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& A, vector<vector<int>>& B) {
        vector<vector<int>> v;
        
        int i=0;
        int j=0;
        for(;i<A.size() && j<B.size();)
        {   vector<int> v1;
            int minval=min(A[i][1],B[j][1]);
            int maxval=max(A[i][0],B[j][0]);
            if(maxval<=minval)
            {   
                v1.push_back(maxval);
                v1.push_back(minval);
                v.push_back(v1);
            }
            if(A[i][1]<B[j][1])
            {
                i++;
            }
            else
            {
                j++;
            }
           
        }
        return v;
    }
};
