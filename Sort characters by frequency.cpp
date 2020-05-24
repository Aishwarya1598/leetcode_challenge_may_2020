class Solution {
public:
    string frequencySort(string s) {
        map<char,int> mp;
        for(auto c:s)
        {
            mp[c]++;
        }
        vector<pair<int,int>> v(mp.begin(),mp.end());
        string ans="";
        sort(v.begin(),v.end(),[](pair<int,int> a ,pair<int,int> b){
            return a.second > b.second;
        });
        for(auto k : v){
            while(k.second--){
                ans+=k.first;
            }
        }
        return ans;
    }
};
