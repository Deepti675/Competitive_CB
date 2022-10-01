https://leetcode.com/problems/online-stock-span/
class StockSpanner {
public:
    int i=0;
    stack<int>s;
    vector<int>v;
    StockSpanner() {
        i=0;
    }
    
    int next(int price) {
        int ans;
        v.push_back(price);
        while(s.size()>0 && v[s.top()]<=price)
            s.pop();
        if(s.size()>0)
            ans=i-s.top();
        else
            ans=i+1;
        s.push(i);
        i++;
        
        return ans;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
