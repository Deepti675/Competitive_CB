https://leetcode.com/problems/beautiful-arrangement/
class Solution {
public:
    int c=0;
    void swap(vector<int>&v,int i,int j){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
    }
    void f(vector<int>&v,int j){
        if(j==v.size())c++;
        for(int i=j;i<v.size();i++){
            
            swap(v,i,j);
            if((v[j]%(j+1)==0) || ((j+1)%v[j]==0))
               f(v,j+1);
            swap(v,i,j);
        }
    }
    int countArrangement(int n) {
       vector<int>v(n,0);
        for(int i=0;i<n;i++){
            v[i]=i+1;
        }
        f(v,0);
        return c;
    }
    
};
