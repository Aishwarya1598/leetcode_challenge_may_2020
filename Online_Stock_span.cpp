class StockSpanner {
public:
    stack<pair<int,int>> st;
    int i=0;
    StockSpanner() {
        i=1;
    }
    
    int next(int price) {
        int ans=0;
        if(st.empty())
        {
            st.push(make_pair(price,i));
            ans=1;
        }
        else
        {
            while (!st.empty() && st.top().first <= price) {
                st.pop();
            }
            ans = !st.empty() ? i - st.top().second : i;
            st.push(make_pair(price, i));
        }
        i++;
        return ans;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
