https://leetcode.com/problems/my-calendar-i/
class MyCalendar {
public:
    map<int,int>mpp;
    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
        mpp[start]++;
        mpp[end]--;
        int sum=0;
        for(auto it=mpp.begin();it!=mpp.end();it++){
            sum+=it->second;
            if(sum>1){
                //remove that event which is intersecting
                mpp[start]--;
                mpp[end]++;
                return false;
                
            }
        }
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */
