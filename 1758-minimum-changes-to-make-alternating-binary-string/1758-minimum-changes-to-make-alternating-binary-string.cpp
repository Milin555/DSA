class Solution {
public:
    int minOperations(string s) {
       
         int count=0;
         int count2=0;
       for(int i=0;i<s.size();i++){
           char a=(i%2==0)? '1':'0';
           char b=(i%2==0)?'0':'1';

           if(s[i]!=a) count++;
           if(s[i]!=b) count2++;

       }
      
       return min(count,count2);
        
    }
};