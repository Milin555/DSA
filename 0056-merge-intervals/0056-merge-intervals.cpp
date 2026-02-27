class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>res;
       
            int n=intervals.size();
            if(n==0)return res;
            sort(intervals.begin(),intervals.end());
            res.push_back(intervals[0]);
           
           for(int i=1;i<n;i++){
            if(res.back()[1]>=intervals[i][0]){
                int a=max(res.back()[1],intervals[i][1]);
                res.back()[1]=a;
            }
            else{
                res.push_back(intervals[i]);
            }
           }
           return res;
    }
};