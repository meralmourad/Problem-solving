#include <iostream>
#include <vector>
#include <numeric>
#include <bitset>

using namespace std;
class Solution
{
public:
    // Problem: 416. Partition Equal Subset Sum
    // my solution in 32 mins
    // int n, res = 0;
    // vector<int> vec;
    // vector<vector<int>> dp;
    // bool rec(int i, int sum)
    // {
    //     if (i == n || sum > res)
    //         return 0;

    //     if (sum == res)
    //         return 1;

    //     if (~dp[i][sum])
    //         return dp[i][sum];

    //     bool leaveIT = rec(i + 1, sum), takeIT = false;
    //     if (vec[i] <= res)
    //         takeIT = rec(i + 1, sum + vec[i]);

    //     return dp[i][sum] = takeIT || leaveIT;
    // }
    // bool canPartition(vector<int> &nums)
    // {
    //     for (int i = 0; i < (nums.size()); i++)
    //         res += nums[i];

    //     if (res % 2 != 0)
    //         return false;

    //     res /= 2;
    //     vec = nums, n = nums.size();
    //     dp.assign(n, vector<int>(res + 5, -1));

    //     return rec(0, 0);
    // }

    // // the optimal solution
    // bool canPartition(vector<int>& nums) {
    //     int n = nums.size() , res  = 0  ;

    //     for(int i : nums)
    //         res+= i ;

    //     if(res%2)
    //         return false ;

    //     res /=2 ;

    //     bitset<20003>dp ;
    //     dp[0] = 1 ;

    //     for(int i : nums)
    //         dp |= (dp<< i) ;

    //     return dp[res] ;

    // }
};

int main()
{
    Solution sol;
    vector<int> nums = {4, 3, 2, 3, 5, 2, 1};
    // cout << sol.canPartition(nums) << endl;
    return 0;
}