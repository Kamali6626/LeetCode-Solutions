class Solution {
public:
    bool isPerfectSquare(int num) {
        bool check=false;
        for(long long i=0;i*i<=num;i++){
            if(i*i==num){
                check= true;

            }
        }
        return check;
    }
};