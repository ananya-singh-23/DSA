class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        float k=0;
        for(auto num:nums2)
            nums1.push_back(num);
       sort(nums1.begin(), nums1.end()); 
       int n=nums1.size();
       if (n%2==0){
        float k=(nums1[int(n/2)]+nums1[(int(n/2)-1)])/2.0;
             return k;
       }
       else{
        float k= (nums1[int(n/2)]);
             return k;
       }
  
    }
};