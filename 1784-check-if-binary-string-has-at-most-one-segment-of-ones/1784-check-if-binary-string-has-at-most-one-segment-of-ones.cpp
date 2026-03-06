class Solution {
public:
    bool checkOnesSegment(string s) {
        if(s.size()==1) return true;
        int ans=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0') ans--;
            if(ans<0 && s[i]=='1'){
                return false;
            }
             
        }
        return true;
    }
};