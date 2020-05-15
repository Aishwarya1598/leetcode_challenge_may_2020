class Solution {
public:
    int k(vector<int>& a)
    {
        int n=a.size();
        int cur=0;
        int maxsofar=INT_MIN;
        for(int i=0;i<n;i++)
        {
            cur=max(a[i],cur+a[i]);
            maxsofar=max(cur,maxsofar);
            if(cur<0)
                cur=0;
                
        }
        return maxsofar;
    }
    int maxSubarraySumCircular(vector<int>& A) {
        int n=A.size();
        int maxsum=0;
        int Isum=k(A);
        //cout<<Isum;
        int c=0;
        for(int i=0;i<n;i++)
        {
            maxsum=maxsum+A[i];
            A[i]=A[i]*(-1);
        }
        
        maxsum=maxsum+k(A);
        if(maxsum>Isum && maxsum!=0)
        {
            return maxsum;
        }
        else
        {
            return Isum;
        }
    }
};
