class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        float x1=(n/2);
        int x=floor(x1);
        map<int,int> mp;
        for(int i=0;i<n;i++)
        {
                    mp[nums[i]]+=1;    
                    }
    map<int,int> :: iterator itr;
     int ans=0;
        for(itr=mp.begin();itr!=mp.end();itr++)
                    {
                        if(itr->second>x)
                            ans=itr->first;
                    }
                    
                    (OR)
                    
        int ans=0;
        sort(nums.begin(),nums.end());
        ans=nums[n/2];
                    return ans;
    }
};
