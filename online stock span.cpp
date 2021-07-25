class StockSpanner {
public:
    stack<int> s;
    vector<int> v;
    StockSpanner() {
        
    }
    
    int next(int price) {
        while(!s.empty() && v[s.top()]<=price){
            s.pop();
        }
        int ans = (s.empty()?v.size()+1:v.size()-s.top());
        s.push(v.size());
        v.push_back(price);
        return ans;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
