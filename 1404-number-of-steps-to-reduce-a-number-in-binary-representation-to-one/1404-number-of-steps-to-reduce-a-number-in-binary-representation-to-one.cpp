class Solution {
public:
    int numSteps(string s) {
       
       int ans=0;
       int n=s.size();
       while(s.size()>1){
        if(s.back()=='0'){
            s.pop_back();
            ans++;
        }
        else{
            int j= s.size()-1;
            while (j >= 0 && s[j] == '1') {
                    s[j] = '0';
                    j--;
                }
            

            if(j>=0){
                s[j] = '1';
            }
            else{
                s="1"+s;
            }
            ans++;
        }

       }

       return ans;
        
    }
};