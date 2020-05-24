class Solution:
    def frequencySort(self, s: str) -> str:
        d={}
        for c in s:
            if c not in d:
                d[c]=1
            else:
                d[c]+=1
        sort_d=dict(sorted(d.items(),key=operator.itemgetter(1),reverse=True))
        ans=""
        for k,v in sort_d.items():
            ans+=k*v
        return ans
        
