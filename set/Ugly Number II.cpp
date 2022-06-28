//https://leetcode.com/problems/ugly-number-ii/
class Solution {
public:
    int nthUglyNumber(int n) {
        set<long long int>a1,a2;
        a1.insert(1);
        while((int)a2.size()!=n)
        {
            long long int m=*a1.begin();
            a2.insert(m);
            a1.erase(m);
            a1.insert(2*m);
            a1.insert(3*m);
            a1.insert(5*m);
        }
        return *a2.rbegin();
    }
};
