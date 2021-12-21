class Solution{
  public:
    void merge(long long arr1[], long long arr2[], int n, int m) 
    { 
	    for(int i=0;i<(n<m?n:m);i++)
	    {
	        if(arr2[i]>arr1[n-i-1])
	            break;
	        else
	            swap(arr2[i],arr1[n-i-1]);
	    }
	    sort(arr1,arr1+n);
	    sort(arr2,arr2 +m);
    } 
};
