class Solution {
public:
    bool solve(int v1[],int v2[])
    {
        for(int i=0;i<26;i++)
        {
            if(v1[i]!=v2[i])
                return false;
        }
        return true;
    }
    vector<int> findAnagrams(string s, string p) {
        vector<int> v;
        int n1=p.size();
        int n=s.size();
        if(n<n1 || n==0)
            return v;
        int v1[26]={0};
        int v2[26]={0};
        for(int i=0;i<n1;i++)
        {
            v1[s[i]-'a']+=1;
            v2[p[i]-'a']+=1;
        }
        int i;
        for(i=n1;i<n;i++)
        {
            if(solve(v1,v2))
                v.push_back(i-n1);
            v1[s[i]-'a']+=1;
            v1[s[i-n1]-'a']-=1;
        }
        if(solve(v1,v2))
            v.push_back(i-n1);
        return v;
    }
};
