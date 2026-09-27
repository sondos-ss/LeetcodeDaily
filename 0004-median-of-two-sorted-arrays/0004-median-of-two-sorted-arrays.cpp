class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i=0,j=0;
        int n=nums1.size(),m=nums2.size();
        vector<int>a;
        while(i<n&&j<m){
           if(nums1[i]<nums2[j]){
              a.push_back(nums1[i]);
              i++;
           }else{
            a.push_back(nums2[j]);
            j++;
           }
        }
        while(i<n){
            a.push_back(nums1[i]);
            i++;
        }
        while(j<m){
            a.push_back(nums2[j]);
            j++;
        }
        int idx=a.size()/2;
        double ans=0;
        if(a.size()%2==0){
            ans=(a[idx-1]+a[idx])/2.0;
        }
        else ans=(a[idx]);
        return ans;

        
    }
};