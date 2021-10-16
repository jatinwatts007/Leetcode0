class Cashier {
    unordered_map<int,int>mp;
    int y=1;
    int x;
    int d;
public:
    Cashier(int n, int discount, vector<int>& products, vector<int>& prices) {
        for(int i=0;i<products.size();i++){
            mp[products[i]]=prices[i];
        }
        x=n;
        d=discount;
    }
    
    double getBill(vector<int> product, vector<int> amount) {
        double sum=0;
        double k=100;
        for(int i=0;i<amount.size();i++)
        {
            sum=sum+(amount[i]*mp[product[i]]);
        }
        if(y==x)
        {
            double z = ((d*sum)/k);
            sum=sum-z;
            y=1;
            return sum;
        }
        y++;
        return sum;
    }
};

/**
 * Your Cashier object will be instantiated and called as such:
 * Cashier* obj = new Cashier(n, discount, products, prices);
 * double param_1 = obj->getBill(product,amount);
 */
