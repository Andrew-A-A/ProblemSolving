#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       int zero=0;
        for (int i=0; i < nums.size(); i++) {
            if (nums[i]==0){
                nums.erase(nums.begin() + i);
                zero++;
                i--;
            }

        }
        for (int i = 0; i < zero; ++i) {
            nums.push_back(0);
        }


    }
};