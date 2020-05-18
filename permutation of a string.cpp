class Solution {
public:
    bool solve(int a1[],int a2[])
    {
        for(int i=0;i<26;i++)
        {
            if(a1[i]!=a2[i])
                return false;
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        if(s2.size()==0 || s2.size()<s1.size())
            return false;
        int a1[26]={0};
        int a2[26]={0};
        for(int i=0;i<s1.size();i++)
        {
            a1[s1[i]-'a']+=1;
            a2[s2[i]-'a']+=1;
        }
        for(int i=s1.size();i<s2.size();i++)
        {
            if(solve(a1,a2))
            {
                return true;
            }
            a2[s2[i]-'a']+=1;
            a2[s2[i-s1.size()]-'a']-=1;
        }
        if(solve(a1,a2))
            {
                return true;
            }
        return false;
    }
};
