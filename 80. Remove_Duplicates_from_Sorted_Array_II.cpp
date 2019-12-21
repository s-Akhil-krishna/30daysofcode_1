//Question: https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/submissions/
//Average case:O(n) |Worst case:Time-O(n^2) | Space -O(1)

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size(),answer=0,count=0,key=INT_MIN;
        int i=0,j=0;
        int unique=INT_MIN-100;
        for( i=0;i<n;i++){  //O(n)
            if(i>0 && nums[i]==key){
                count++; 
            }
            else {count=1;key=nums[i];}
            if(count>2){
                nums[i]=unique;
            }//end-if
        }//end-for
        
        for( i=0;i<n;i++){ //O(n)
            if(nums[i]!=unique){
                answer++;
            }//end-if
        }//end-for
        
        for( i=0;i<n;i++){ //O(n)
            if(nums[i]==unique){
                j=i+1;
                while(j<n && nums[j]==unique) j++;  //O(n)
                if(j<n)
                    swap(nums[i],nums[j]);
            }//end-if
        }//end-for
        return answer;
    }
};
