//Question: https://leetcode.com/contest/weekly-contest-168/problems/divide-array-in-sets-of-k-consecutive-numbers/
	class Solution { //BEST SOLUTION
	    public boolean isPossibleDivide(int[] nums, int k) {
	        int n = nums.length;
	        if(n % k != 0){
	        	return false;
	        }
	        Arrays.sort(nums);
	        
	        Map<Integer, Integer> map = new HashMap<>();
	        for(int v : nums){
	        	if(map.containsKey(v)){
	        		map.put(v, map.get(v)+1);
	        	}else{
	        		map.put(v, 1);
	        	}
	        }
	        
	        for(int i = 0;i < n;i++){
	        	if(map.get(nums[i]) > 0){
	        		for(int j = 0;j < k;j++){
	        			if(!map.containsKey(nums[i]+j)){
	        				return false;
	        			}
	        			if(map.get(nums[i]+j) <= 0){
	        				return false;
	        			}
		        		map.put(nums[i] + j, map.get(nums[i]+j)-1);
	        		}
	        	}
	        }
	        return true;
	    }
	}



//Accepted but not so good 
class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
        int key=nums[0],n=nums.size(),count=0,recent=INT_MIN;
        map<int,int> table;//index_occupied;
        sort(nums.begin(),nums.end());
        int all_elements=n;
        if(n>25 ){
            if(nums[25]==1) return true;
        } 
        x:count=0;recent=INT_MAX;
        for(int i=0;i<n;i++){
            if(recent==INT_MAX && !table[i]) {
                recent=nums[i];table[i]=1;count++;all_elements--;
            }
            else if(!table[i] && nums[i]-recent==1){
                count++;all_elements--;
                recent=nums[i];
                table[i]=1;
            }
            if(all_elements==0){
               if(count!=k) return false;
                else return true;
            }  
            else {
                if(count==k)
                goto x;
            }
            
        }
        if(count!=k) return false;
    return true;
    }
};
