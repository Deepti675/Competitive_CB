class Solution {
public:
    double findMedianSortedArrays(vector<int>& num1, vector<int>& num2) {
        int n1=num1.size();
        int n2=num2.size();
      
      int mid=(n1+n2)/2.0;
      num1.insert(num1.end(),num2.begin(),num2.end());
        
      sort(num1.begin(),num1.end());
      if((n1+n2)%2==0)
          
        return (num1[mid]+num1[mid-1])/2.0;
      else
          return num1[mid];
    }
};
