int[] nums = { 0, 0, 1, 1, 1, 2, 2, 3, 3, 4 };

Console.WriteLine(RemoveDuplicates(nums));

int RemoveDuplicates(int[] nums)
{
    if (nums == null || nums.Length == 0)
        return 0;
    else if (nums.Length == 1)
        return 1;

    int index1 = 0,
        index2 = 1;

    while (index2 <= nums.Length - 1)
        if (nums[index1] == nums[index2])
            index2++;
        else
            nums[++index1] = nums[index2++];

    return ++index1;
}