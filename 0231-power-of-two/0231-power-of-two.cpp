class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0) return false;
        long ans = 1;
        int range = pow(2,30);
        while(ans<=range){
            if(n==ans) return true;
            ans = ans * 2;
        }
        return false;
    }
};