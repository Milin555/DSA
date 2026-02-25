class Solution {
public:
    int maxBottlesDrunk(int n, int E) {
         int res=n;
        while(n>=E){
            n-=E;
            n++;
            E++;
            res++;
        }
        return res;
        
    }
};