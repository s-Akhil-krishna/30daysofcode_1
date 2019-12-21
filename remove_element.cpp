//Question:https://leetcode.com/problems/remove-element/submissions/
//Time-O(n) | Space -O(1)

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        if(n==0) return 0;
        int k=n-1,count=0;
        while(k>=0 && nums[k]==val) {
            k--;count++;
        }//end-while
        for(int i=0;i<n && i<=k;i++){
            if(nums[i]==val ) {
                while(k>i && nums[k]==val) {
                    k--;count++;
                }//end-while
                if(k>=0){
                swap(nums[i],nums[k--]);
                count++;
                }
            }//end-if
        }//end-for
        return n-count;
    }
};
