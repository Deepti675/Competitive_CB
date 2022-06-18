class Solution {
public:
    bool isHappy(int n) {
         set<int>s;
         int v;
         int num;
        while(1)
        {
            v=0;
            while(n)
            {
                num=n%10;
                v+=num*num;
                n=n/10;
            }
            if(v==1)
                return true;
            else if(s.find(v)!=s.end())
                return false;
            s.insert(v);
            n=v;
            
        }
        return false;
    }
};
