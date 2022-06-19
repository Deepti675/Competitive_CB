vector<long long> printFirstNegativeInteger(long long int nums[],
                                             long long int n, long long int k) {
                                                 
 
     long long int i=0,j=0;
     list<long long int>l;
     vector<long long int>res;
      while(j<n)
      {
          //calculation
          if(nums[j]<0)
          {
          l.push_back(nums[j]);
          }
          if(j-i+1<k)
          {
          j++;
          }
          else if(j-i+1==k)
          {
              //ans calculation
              if(l.size()==0)
              {
              res.push_back(0);
              }
              else
              {
                  res.push_back(l.front());
                  if(l.front()==nums[i])
                  {
                  l.pop_front();
                  }
                  
                  
              }
              i++;
              j++;
          }
          
      }
      return res;
                                                 
 }
