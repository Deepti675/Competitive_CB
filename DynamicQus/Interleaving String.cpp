https://leetcode.com/problems/interleaving-string/
class Solution {
public:
     unordered_map<string,bool>mpp;
    bool fun(string s1, string s2, string s3,int l1,int l2,int l3,int p1,int p2,int p3)
    {
       
        if(p3==l3)
        {
            if(p1==l1&&p2==l2)
                return true;
            else
                return false;
        }
        string key=to_string(p1)+"#"+to_string(p2)+"#"+to_string(p3);
        if(mpp.find(key)!=mpp.end())
            return mpp[key];
        if(p1==l1)
            return mpp[key]=(s2[p2]==s3[p3])?fun(s1,s2,s3,l1,l2,l3,p1,p2+1,p3+1):false;
        if(p2==l2)
            return mpp[key]=(s1[p1]==s3[p3])?fun(s1,s2,s3,l1,l2,l3,p1+1,p2,p3+1):false;
        bool fir=false,sec=false;
        if(s1[p1]==s3[p3])
            fir=fun(s1,s2,s3,l1,l2,l3,p1+1,p2,p3+1);
        if(s2[p2]==s3[p3])
            sec=fun(s1,s2,s3,l1,l2,l3,p1,p2+1,p3+1);
        return mpp[key]=fir|sec;
    }
    bool isInterleave(string s1, string s2, string s3) {
        int l1=s1.length();
        int l2=s2.length();
        int l3=s3.length();
        if(l3!=l1+l2)
            return false;
        return fun(s1,s2,s3,l1,l2,l3,0,0,0);
        
        
    }
};
