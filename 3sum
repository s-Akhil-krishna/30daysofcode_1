//Question:return a vector of triplets from the given array in which every triplet sum is equal to zero.

//Brute Force Approach
//Time -O(n^3) | Space- O(n)

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        int n=nums.size();
        map<vector<int>,int> table;
        vector<int> cur;
        int i,j,k;
        
        for(i=0;i<n-2;i++)
        {
            for(j=i+1;j<n-1;j++)
            {
                for(k=j+1;k<n;k++)
                {
                    if(nums[i]+nums[j]+nums[k]==0 )
                    {
                        cur.push_back(nums[i]);
                        cur.push_back(nums[j]);
                        cur.push_back(nums[k]);
                        sort(cur.begin(),cur.end());
                        if(!table[cur])
                        {
                        result.push_back(cur);
                        table[cur]=1;
                        }
                         while (!cur.empty())
                             cur.pop_back();  
                    }                      
                }
            }
        }
        return result;
    }
};
