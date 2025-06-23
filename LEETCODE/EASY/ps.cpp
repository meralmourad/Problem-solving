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
     bool canPartitionKSubsets(vector<int>& nums, int k) {
        int n = nums.size() , res = 0 ;
        
        for(int i : nums )
            res+= i ;

        if(res % k )
            return false ;
        
        vector<int>dp(16e5 , 0 ) ;
        dp[0] =1 ;

        for(int i = 0 ; i< n ; i++){
            for(int j = 0 ; j<=res ; j++){
                if(dp[j]){
                    dp[nums[i]+j] ++ ;
                }
            }
        }

        res /= k ;
        cout<<dp[res]<<"\n" ;
        return dp[res] == k ;
    }
};

int main()
{
    Solution sol;
    vector<int> nums = {4,3,2,3,5,2,1};
    // cout << sol.minimumOperations(nums) << endl;
    // cout << sol.canPartition(nums) << endl; // Example usage for canPartition
    cout << sol.canPartitionKSubsets(nums, 4) << endl; // Example usage for canPartitionKSubsets
}