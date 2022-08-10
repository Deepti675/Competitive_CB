//3 approches possible 
//1. recursive
//2. Dynamic programming
//3. catalan number approch
//below is the catalan number approch
//https://leetcode.com/problems/unique-binary-search-trees/
class Solution {
public:
    int numTrees(int n) {
     long long int c=1;
     for(int i=1;i<=n-1;i++)
     {
         c=2*(2*i+1)*c/(i+2);
     }
        return c;
    }
};
