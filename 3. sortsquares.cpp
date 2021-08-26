/*
Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.

Example 1:
Input: nums = [-4,-1,0,3,10]
Output: [0,1,9,16,100]
Explanation: After squaring, the array becomes [16,1,0,9,100].
After sorting, it becomes [0,1,9,16,100].
*/
/*SOME LOGICAL ERROR IN THIS CODE SHOWING BUFFER OVERFLOEW ADDRESSSANITIZER ERROR
vector<int> sortedSquares(vector<int> &nums)
{

    int i = 0, j = 0;
    vector<int> a;
    vector<int> b;

    while (nums[i] < 0)
    {
        a.push_back(nums[i] * nums[i]);
        i++;
    }
    z
        //reverse(a.begin(),a.end());

        for (int low = 0, high = a.size() - 1; low <= high; low++, high--)
    {
        swap(a[low], a[high]);
    }

    for (; i < nums.size(); i++)
    {
        b.push_back(nums[i] * nums[i]);
    }

    vector<int> ans;

    i = 0;
    j = 0;
    while (i < a.size() && j < b.size())
    {
        if (a[i] < b[j])
        {
            ans.push_back(a[i]);
            i++;
        }
        else
        {
            ans.push_back(b[j]);
            j++;
        }
    }

    while (i < a.size())
    {
        ans.push_back(a[i]);
        i++;
    }

    while (j < b.size())
    {
        ans.push_back(b[j]);
        j++;
    }

    return ans;
}*/
vector<int> sortedSquares(vector<int> &nums)
{
    int i = 0, j = nums.size() - 1;
    vector<int> ans;

    for (; i <= j;)
    {
        if (abs(nums[i]) < abs(nums[j]))
        {
            ans.push_back(nums[j] * nums[j]);
            j--;
        }
        else
        {
            ans.push_back(nums[i] * nums[i]);
            i++;
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
}