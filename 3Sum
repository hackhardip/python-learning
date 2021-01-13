/*
Leetcode 15. 3Sum
Medium

9066

954

Add to List

Share
Given an array nums of n integers, are there elements a, b, c in nums such that a + b + c = 0? Find all unique triplets in the array which gives the sum of zero.

Notice that the solution set must not contain duplicate triplets.

 

Example 1:

Input: nums = [-1,0,1,2,-1,-4]
Output: [[-1,-1,2],[-1,0,1]]
Example 2:

Input: nums = []
Output: []
Example 3:

Input: nums = [0]
Output: []
 

Constraints:

0 <= nums.length <= 3000
-105 <= nums[i] <= 105


*/
# Time complexity : O(N^2)
# space complexity: O(1)
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        if(nums.size()<3){return ans;}
        for(int i=0;i<nums.size()-2;i++){
            if(nums[i] >0){
                return ans;}
            if(i >0 && nums[i]==nums[i-1]){continue;}
            #ignore duplicates
            int start = i +1;
            int end = nums.size()-1;
            while(start< end){
                int total = nums[start] + nums[i] + nums[end];
            
                if(total < 0){
                    start++;
                }
                else if(total>0){
                    end--;
                }
                else{
                vector<int> app = { nums[i], nums[start] , nums[end]};
                ans.push_back(app);
                while(start < end && nums[start] == nums[start+1]){
                    start++;
                    #ignore duplicates
                    
                }
                while (start < end && nums[end] == nums[end-1]){
                    end--;
                    #ignore duplicates
                    
                }
                start++;
                end--;
                }
                
                
            }
            
        }
        return ans;
        
    }
};
    
};
