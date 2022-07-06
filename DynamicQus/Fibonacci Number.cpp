//https://leetcode.com/problems/fibonacci-number/
//space optimized code
class Solution {
public:
    int fib(int n) {
        if(n<=1)
            return n;
        int p1=0,p2=1,current;
        for(int i=2;i<=n;i++)
        {
            current=p1+p2;
            p1=p2;
            p2=current;
        }
        return current;
    }
};
