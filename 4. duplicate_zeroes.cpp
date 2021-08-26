/*Given a fixed-length integer array arr, duplicate each occurrence of zero, shifting the remaining elements to the right.

Note that elements beyond the length of the original array are not written. Do the above modifications to the input array in place and do not return anything.

 

Example 1:

Input: arr = [1,0,2,3,0,4,5,0]
Output: [1,0,0,2,3,0,0,4]
Explanation: After calling your function, the input array is modified to: [1,0,0,2,3,0,0,4]
*/

void shift_right(vector<int> &arr, int i, int prev)
{
    int temp = 0;
    for (; i < arr.size(); i++)
    {
        temp = arr[i];
        arr[i] = prev;
        prev = temp;
    }
    /*cout<<"swapped"<<endl;
          for(int i=0;i<arr.size();i++)
              cout<<arr[i]<<" ";
          cout<<"end"<<endl;*/
}
void duplicateZeros(vector<int> &arr)
{
    int n = arr.size();
    int prev = 0;

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] == 0)
        {
            prev = arr[i + 1];
            arr[i + 1] = 0;
            shift_right(arr, i + 2, prev);
            i += 1;
        }
    }
}