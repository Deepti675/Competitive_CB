class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
       int i=0,j=0;
        int n=nums.size();
        vector<int>res;
        list<int>l;
        while(j<n)
        {
            //calculation 
            
            while(l.back()<nums[j]&&l.size()>0)
            {
                l.pop_back();
            }
            l.push_back(nums[j]);
            if(j-i+1<k)
            {
                j++;
            }
            else if(j-i+1==k)
            {
                //ans calculation
                res.push_back(l.front());
                //slide the window
                if(l.front()==nums[i])
                    l.pop_front();
                i++;
                j++;
            }
        }
       return res; 
    }
};
