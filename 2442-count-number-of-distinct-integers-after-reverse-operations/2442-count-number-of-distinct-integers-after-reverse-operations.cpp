class Solution {
public:
     int rev(int n){
        int rem=0;
        int ans=0;
        while(n!=0){
            rem=n%10;
            ans=ans*10+rem;
            n/=10;

        }
        return ans;
     }

    int countDistinctIntegers(vector<int>& nums) {
        set<int>s;
        for(int i=0;i<nums.size();i++){
            int res=rev(nums[i]);
            s.insert(res);
            s.insert(nums[i]);
        }
        
        return s.size();
    }
};