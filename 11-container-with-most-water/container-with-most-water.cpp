class Solution {
public:
    int maxArea(vector<int>& height) {
       int l=0;
       int r=height.size()-1;
       int ma=0;
       while(l<r){
        int area=(r-l)*min(height[r],height[l]);
        ma=max(ma,area);
        if (height[r]>height[l]){
            l++;
        }
        else{
            r--;
        }
       }
        return  ma;
    }
};