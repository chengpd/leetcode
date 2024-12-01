// 这是一个C++程序，用于删除有序数组中的重复项。
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0) {
            return 0;
        }
        int i = 0;
        for (int j = 1; j < nums.size();) {
            if (nums[j] != nums[i]) {
                i++;
                j++;
            } else {
                nums.erase(nums.begin() + j);
            }
        }
        return i + 1;

    }
};

int main() {
    // 在这里写你的代码
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4}; // 定义一个有序数组
    Solution solution;
    solution.removeDuplicates(nums);

    for (int num : nums) {
        std::cout << num << " "; // 输出vector中的元素
    }
    std::cout << std::endl;

    return 0; // 返回0表示程序正常结束
}