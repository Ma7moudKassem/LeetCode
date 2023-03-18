//Console.WriteLine(LengthOfLastWord("Hello World")); 
//Console.WriteLine(LengthOfLastWord("   fly me   to   the moon  ")); 
//Console.WriteLine(LengthOfLastWord("luffy is still joyboy")); 
//Console.WriteLine(LengthOfLastWord("")); 
Console.WriteLine(LengthOfLastWord("a")); 

int LengthOfLastWord(string s)
{

    List<string> strs = s.Split(' ').ToList();

    int i = strs.Count - 1;
    while (i >= 0)
    {
        if (strs[i] != "")
            return strs[i].Length;

        i--;
    }

    return 0;
}