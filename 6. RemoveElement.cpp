/*Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. The relative order of the elements may be changed.

Since it is impossible to change the length of the array in some languages, you must instead have the result be placed in the first part of the array nums. More formally, if there are k elements after removing the duplicates, then the first k elements of nums should hold the final result. It does not matter what you leave beyond the first k elements.

Return k after placing the final result in the first k slots of nums.

Do not allocate extra space for another array. You must do this by modifying the input array in-place with O(1) extra memory.
Example 1:

Input: nums = [3,2,2,3], val = 3
Output: 2, nums = [2,2,_,_]
Explanation: Your function should return k = 2, with the first two elements of nums being 2.
It does not matter what you leave beyond the returned k (hence they are underscores).
*/
int removeElement(vector<int> &v, int val)
{
    int count = v.size();

    /*vector<int> v={0,1,2,2,2,2,3,0,4,2};
        val=2;
        count=v.size();*/

    for (int i = 0; i < count; i++)
    {
        int prev_i = i;
        if (v[i] == val)
        {
            for (int j = i + 1; j < v.size();)
            {
                swap(v[i], v[j]);
                j++;
                i++;
            }
            i = prev_i - 1;
            count--;
        }
    }

    /* for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }*/

    return count;
}