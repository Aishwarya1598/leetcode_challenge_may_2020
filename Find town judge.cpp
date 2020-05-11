class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        
        int n=trust.size();
        if(n==1)
            return trust[0][1];
        if(N==1)
            return 1;
        map<int,int>mp;
        map<int,int>mp1;
        for(int i=0;i<n;i++)
        {
            mp[trust[i][1]]+=1;
            mp1[trust[i][0]]+=1;
        }
        map<int,int> :: iterator itr1;
        map<int,int> :: iterator itr2;
        for(int i=1;i<=N;i++)
        {
             itr1 = mp1.find(i);
            
            if(itr1 == mp1.end())
            {                
                 itr2 = mp.find(i);
                if(itr2==mp.end())
                    break;
                else if( itr2->second==N-1)
                    return i;
            } 
        }
        return -1;
    }
};
