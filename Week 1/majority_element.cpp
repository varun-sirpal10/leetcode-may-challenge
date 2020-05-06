class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        unordered_map<int,int> freq;
        
        for(int num:nums){
            freq[num]++;
        }
        
        int lim = floor(nums.size()/2);
        
        for(int num:nums){
            if(freq[num] > lim){
                return num;
            }
        }
        
        return -1;
    }
};