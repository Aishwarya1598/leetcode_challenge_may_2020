class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int l=0;
        int r=nums.size()-1;
        while(l<r)
        {
            int mid=l+(r-l)/2;
            if(mid%2==0)
            {
                if(nums[mid]==nums[mid+1])
                    l=mid+2;
                else
                    r=mid;
            }
            else
            {
                if(nums[mid]==nums[mid-1])
                    l=mid+1;
                else
                    r=mid-1;
            }
        }
        return nums[l];
    }
};

Explaination:-
--------------
/*Here we have used binary search, generally we can observe that if the first occurrence of the element is at even index then the next occurence of it
is at odd index and vice versa, So, in this problem we are checking the index of the mid:-
==> if the mid is even and if the elelment at mid and mid+1 are same then the element required 
is after mid else before mid;
==> if mid is odd then if element at mid and mid-1 are same then the element required is after mid
else before mid;
*/
