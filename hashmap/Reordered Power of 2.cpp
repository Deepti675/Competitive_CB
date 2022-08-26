https://leetcode.com/problems/reordered-power-of-2/
class Solution {
public:
    bool reorderedPowerOf2(int n) {
        unordered_map<int,vector<int>>mpp;
        int x=pow(10,9);
        for(int i=1;i<=x;i=i*2){
            int k=i;
            vector<int>v(10,0);
            while(k){
                int r=k%10;
                v[r]++;
                k=k/10;
            }
            mpp[i]=v;
        }
        vector<int>vv(10,0);
        while(n){
            int r=n%10;
            vv[r]++;
            n=n/10;
        }
        for(int i=1;i<=x;i=i*2){
            vector<int>t=mpp[i];
            bool f=1;
            for(int j=0;j<=9;j++){
                if(t[j]!=vv[j])
                    f=0;
            }
            if(f==1)
                return true;
        }
        
      return false;  
    }
};
