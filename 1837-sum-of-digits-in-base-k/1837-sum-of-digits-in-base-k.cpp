class Solution {
public:
    int sumBase(int n, int k) {
        int sum{};
        while(n>0){
            int rem=n%k;
            sum+=rem;
            n/=k;
        }
        return sum;
    }
};