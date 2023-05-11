int[] arr = new int[] { 1 };


PlusOne(arr);
int[] PlusOne(int[] digits)
{

    int length = digits.Length;
    for (int i = digits.Length - 1; i >= 0; i--)
    {
        if (digits[i] < 9)
        {
            digits[i]++;
            return digits;
        }
        digits[i] = 0;
    }

    int[] newArr = new int[length + 1];
    newArr[0] = 1;

    return newArr;
}