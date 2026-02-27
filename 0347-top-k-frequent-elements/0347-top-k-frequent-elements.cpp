class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       unordered_map<int,int>m;
       vector<int>ans;
       for(int i=0;i<nums.size();i++){
        m[nums[i]]++;
       }
       vector<vector<int>> frq(nums.size()+1);
       for(auto it:m){
        frq[it.second].push_back(it.first);
       }
       
       for(int i=frq.size()-1;i>=0;i--){
        for(int num:frq[i]){
            ans.push_back(num);
            if(ans.size()==k){
                return ans;
            }
                    }
       }
    return {};
    }
};