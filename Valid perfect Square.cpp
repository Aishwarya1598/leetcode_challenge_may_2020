class Solution {
public:
    bool isPerfectSquare(int num) {
 /*Binary Search */
        if(num==0||num==1)
            return true;
        long long int l=0;
        long long int r=num/2;
        while(l<=r)
        {
            long long int m= l+(r-l)/2;
            if(m*m<num)
            {
                l=m+1;
            }
            else if(m*m>num)
            {
                r=m-1;
            }
            else if(m*m == num)
                return true;
        }
        return false;
    }
    (OR)
    /* brute force solution */
    /* int x=sqrt(num);
        for(int i=1;i<=x;i++)
        {
            if(i*i==num)
            {
                return true;
            }
        }
        return false;*/
};
