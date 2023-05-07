int[] arr = { 3, 2, 2, 3 };

RemoveElement(arr, 3);
int RemoveElement(int[] nums, int val)
{
    int j = 0;
    for (int i = 0; i < nums.Length; i++)
        if (nums[i] != val)
            nums[j++] = nums[i];

    return j;
}