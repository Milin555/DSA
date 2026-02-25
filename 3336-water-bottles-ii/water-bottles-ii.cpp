class Solution {
public:
    int maxBottlesDrunk(int num, int num1) {
        int c=0;
        int curr=num1;
        while(num>=num1){
            num1+=curr;
            curr++;
            c++;
        }
        return num+c;
    }
};