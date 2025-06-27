class Solution {
public:
    int mySqrt(int x) {
        if(x>pow(2,31)-1) return 0;        
        for(long int i=1;i<=x;i++){
            if(i*i>x) return i-1;
            else if(i*i==x) return i;
        }
        return 0;
    }
};