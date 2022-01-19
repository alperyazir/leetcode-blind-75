// 1. Two Sum
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;
vector<int> twoSum(vector<int> &nums, int target)
{
    unordered_map<int, int> imap; // value, index
    vector<int> res(2, 0);

    for (auto i = 0; i < nums.size(); ++i)
    {
        if (auto iter = imap.find(target - nums[i]); iter != imap.end())
        {
            res[0] = iter->second;
            res[1] = i;
            break;
        }
        else 
        {
            imap[nums[i]] = i;
        }
    }
    return res;
}

int main()
{
    vector<int> ivec{3,3};
    for (auto i : twoSum(ivec, 6))
    {
        cout << i << " ";
    }
    cout << "\n";
}