#include <iostream>
#include <vector>
#include <numeric>
#include <bitset>

using namespace std;

class Solution
{
public:
    // Problem: 3396. Minimum Operations to Make All Elements Equal
    // my solution in 6mins
    // int minimumOperations(vector<int> &nums)
    // {
    //     int Size = nums.size(), arr[105] = {}, res = 0;
    //     for (int i = Size - 1; i >= 0; i--, Size--)
    //     {
    //         arr[nums[i]]++;
    //         if (arr[nums[i]] == 2)
    //         {
    //             // Size % 3 == 0 ? res = Size / 3 : res = (Size / 3) + 1;
    //             // optimal -->
    //             res =  i+1 /3 ;
    //             break;
    //         }
    //     }

    //     return res;
    // }

};

int main()
{
    Solution sol;
    vector<int> nums = {4,3,2,3,5,2,1};
    // cout << sol.minimumOperations(nums) << endl;
}