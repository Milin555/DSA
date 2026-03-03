class Solution {
public:
    char findKthBit(int n, int k) {
        if(n==1) return '0';
        int l=pow(2,n)-1;

        if(k<ceil(l/2.0)){
             return  findKthBit(n-1,k);
        }

        else if(k>ceil(l/2.0)){
           char ch= findKthBit(n-1,(l-k+1));
            if(ch=='0') return '1';
            else return '0';
        }
        
        else {
            return '1';
        }
       
        
    }
};