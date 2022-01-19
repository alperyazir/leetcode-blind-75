// 217. Contains Duplicate
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

bool containsDuplicate(vector<int> &nums)
{
    unordered_map<int, int> mmap;
    for (const auto iter : nums)
    {
        if (mmap[iter] == 0)
            mmap[iter]++;
        else
            return true;
    }
    return false;
}

int main()
{
    vector<int> ivec{1,2,3,4};
    cout << boolalpha << containsDuplicate(ivec) << "\n";
}
