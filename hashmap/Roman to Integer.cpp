class Solution {
public:
    int romanToInt(string s) {
        map<char,int>mpp;
        mpp['I']=1;
        mpp['V']=5;
        mpp['X']=10;
        mpp['L']=50;
        mpp['C']=100;
        mpp['D']=500;
        mpp['M']=1000;
        int n=s.length();
       int k= mpp[s[n-1]];
        for(int i=n-2;i>=0;i--)
        {
            if(mpp[s[i]]<mpp[s[i+1]])
            {
                k-=mpp[s[i]];
            }
            else
            {
                k+=mpp[s[i]];
            }
        }
        return k;
    }
};
