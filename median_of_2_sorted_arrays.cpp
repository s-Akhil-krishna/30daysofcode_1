//Question : https://leetcode.com/problems/median-of-two-sorted-arrays/submissions/
//Time -O(m+n) | Space -O(m+n)

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
     int n1=nums1.size(),n2=nums2.size();
        vector<int> array;
        int i=0,j=0;double median=-1;
        while(i<n1 && j<n2){
            int element= (nums1[i]<nums2[j])?nums1[i++]:nums2[j++];
            array.push_back(element);
        }//end-while
        while(i<n1) array.push_back(nums1[i++]);
        while(j<n2) array.push_back(nums2[j++]);
        int n=n1+n2;
        if(n%2){
            return array[n/2];
        }
        else {
            median =array[n/2]+array[n/2 -1];
        }
        return median/2;
    }
};
