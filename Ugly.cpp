class Solution {
public:
    int nthUglyNumber(int n) {
        set<long long> s;
        n--;
        long long ans = 1;
        s.insert(1);
        while(n--){
            s.insert(ans*2);
            s.insert(ans*3);
            s.insert(ans*5);
            auto it = s.find(ans);
            if(it != s.end()){
                ++it;
                ans = *it;
            }
        }
        return ans;
    }
};