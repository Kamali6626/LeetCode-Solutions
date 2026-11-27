class Solution {
public:
    int firstUniqChar(string s) {
        int n=s.length();
        bool check;
        for(int i{0};i<n;i++){
            check=true;
            for(int j{0};j<n;j++){
                if(s[i]==s[j] && i!=j){
                   check=false;
                   break;
                }
            }
        if(check)
        return i;
        }
        return -1;
    }
};