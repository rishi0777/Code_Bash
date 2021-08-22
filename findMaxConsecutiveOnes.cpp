/*Given a binary array nums, return the maximum number of consecutive 1's in the array.
Input: nums = [1,1,0,1,1,1]
Output: 3
Explanation: The first two digits or the last three digits are consecutive 1s. The maximum number of consecutive 1s is 3.
*/
#include<bits/stdc++.h>
using namespace std;
int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=1;
        int max=0;
        int prev=nums[0];
        
     
        //calculating the value of maximum
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                max=1;break;
            }
        }
            
        
        for(int i=1;i<nums.size();i++){
            if(nums[i]==1 && prev==1) {
                count++;
                max=max>count?max:count;
            }
            else{
                count=1;
            }
            prev=nums[i];
        }
        
        return max;
        
    }