class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return true; 
        bool is = false;
        int i = 0;

        while (i < n - 1) {
            int f = nums[i] + i;
            if (f >= n - 1) { 
                is = true;
                break;
            }
           
            int next = i;
            for (int j = i + 1; j <= f; j++) {
                if (j + nums[j] > next + nums[next]) {
                    next = j;
                }
            }
            if (next == i) {
                break; 
            }
            i = next; 
        }

        return is;
    }
};