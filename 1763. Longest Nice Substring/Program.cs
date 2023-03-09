var m = LongestNiceSubstring("cChH");


Console.WriteLine();
string LongestNiceSubstring(string s)
{
    return DFS(s);
}

string DFS(string s)
{
    HashSet<char> hashSet = new HashSet<char>(s);
    if (s.Length < 2)
        return "";

    for (int i = 0; i < s.Length; i++)
    {
        if (!hashSet.Contains(char.ToLower(s[i])) || !hashSet.Contains(char.ToUpper(s[i])))
        {
            string str1 = DFS(s.Substring(0, i));
            string str2 = DFS(s.Substring(i + 1, s.Length - i - 1));
            return str2.Length > str1.Length ? str2 : str1;
        }
    }
    return s;
}