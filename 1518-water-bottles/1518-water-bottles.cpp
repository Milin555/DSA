class Solution {
public:
    int numWaterBottles(int n, int e) {
      int ans=n;

       while (n >= e) {
            int newBottles = n / e;
            int remainder = n % e;

            ans += newBottles;
            n = newBottles + remainder;
        }
        return ans;
    }
};