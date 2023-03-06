string[] arr = { "ab", "a" };

Console.WriteLine(LongestCommonPrefix(arr));



string LongestCommonPrefix(string[] strs)
{
    if (strs is null || !strs.Any() || (strs.Count(e => e == "") > 0)) return "";

    int i = 0;

    string result = string.Empty;
    while (i < strs[0].Length)
    {
        string provider = strs[0][i].ToString();
        bool isMatch = false;
        foreach (string str in strs)
        {
            if (str.Length == i) return result;
            if (str[i].ToString() == provider)
                isMatch = true;
            else return result;
        }

        result = result + provider;
        i++;
    }

    return result;
}