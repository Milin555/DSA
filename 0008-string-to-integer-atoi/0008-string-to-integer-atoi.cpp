class Solution {
public:
   bool isDigit(char ch){
    if(ch == '0'|| ch == '1'|| ch == '2'
    || ch == '3'|| ch == '4'|| ch == '5'||
     ch == '6'||ch == '7'||ch == '8'||ch == '9'){
            return true;
     }

     return false;
   }
  
    int myAtoi(string s) {
        int sign=1;
       int j=0;
          while(s[j]==' ')j++;
          if(s[j]=='+'){
            sign=1;
            j++;
          } 

          else if(s[j]=='-') {
            sign=-1;
            j++;
          }
          
       long long ans=0;
       while(j<s.size()&& isDigit(s[j])){
        int dig=s[j]-'0';
        if(ans > (INT_MAX - dig) / 10){
                return sign == 1 ? INT_MAX : INT_MIN;
            }

        ans=ans*10+dig;
        j++;

       }

       return sign*ans;

        
    }
};