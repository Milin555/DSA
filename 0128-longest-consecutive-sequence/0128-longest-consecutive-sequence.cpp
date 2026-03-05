class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size()==0) return 0;

        int ans=1;
        int maxi=1;
        
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]) continue;
            if((nums[i]+1)==nums[i+1]){
                ans++;
            }
            else{
                if(maxi<ans){
                    maxi=ans;
                }
                ans=1;
            }
        }
         maxi = max(maxi, ans);
        return maxi;
        
    }
};