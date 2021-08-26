/*Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same.

Since it is impossible to change the length of the array in some languages, you must instead have the result be placed in the first part of the array nums. More formally, if there are k elements after removing the duplicates, then the first k elements of nums should hold the final result. It does not matter what you leave beyond the first k elements.

Return k after placing the final result in the first k slots of nums.

Do not allocate extra space for another array. You must do this by modifying the input array in-place with O(1) extra memory.
Example 1:

Input: nums = [1,1,2]
Output: 2, nums = [1,2,_]
Explanation: Your function should return k = 2, with the first two elements of nums being 1 and 2 respectively.
It does not matter what you leave beyond the returned k (hence they are underscores).
*/

int removeDuplicates(vector<int> &nums)
{
    /*int i=0;
        int count=nums.size();
        
        for(;i<count-1;i++){
            int prev_i=i;
            if(nums[i]==nums[i+1]){
                for(int j=i+1;j<nums.size();){
                    swap(nums[i],nums[j]);
                    i++;
                    j++;
                }
                i=prev_i-1;
                count--;
            }
            
        }
        return count;
        */
    unordered_map<int, int> mp;
    int count = 0;
    int i = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        mp[nums[i]]++;
    }
    for (auto map : mp)
    {
        nums[i] = map.first;
        count++;
        i++;
    }
    sort(nums.begin(), nums.begin() + count); //sorting specific section of vector
    return count;
}
