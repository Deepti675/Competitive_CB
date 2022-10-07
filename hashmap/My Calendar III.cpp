https://leetcode.com/problems/my-calendar-iii/
class MyCalendarThree {
public:
    int mcount=0;
    map<int,int>mp;
    MyCalendarThree() {
        
    }
    
    int book(int start, int end) {
        mp[start]++;
        mp[end]--;
        int count=0;
        for(auto it =mp.begin();it!=mp.end();it++){
            count+=it->second;
            mcount=max(count,mcount);
        }
        return mcount;
    }
};

/**
 * Your MyCalendarThree object will be instantiated and called as such:
 * MyCalendarThree* obj = new MyCalendarThree();
 * int param_1 = obj->book(start,end);
 */
