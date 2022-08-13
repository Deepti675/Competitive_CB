https://practice.geeksforgeeks.org/problems/max-sum-without-adjacents2430/1
	int findMaxSum(int *arr, int n) {
	    // code here
	    
	    int incl=arr[0];
	    int excl=0;
	    int exx;
	    for(int i=1;i<n;i++){
	        exx=max(incl,excl);
	        incl=(excl+arr[i]);
	        excl=exx;
	    }
	    return max(excl,incl);
	}
