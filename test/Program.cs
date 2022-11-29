using System.Diagnostics.Tracing;

Console.WriteLine(CountValidWords("alice and  bob are playing stone-game10"));
int CountValidWords(string sentence)
{
    int validWords = 0;
    string[] words = sentence.Split(" ");

    foreach (string word in words)
    {
        
        if (!(word.Contains("!") || word.Contains(".") || word.Contains(",") || word.Contains(" ") || word.Contains("-") || word.Contains("_") || string.IsNullOrEmpty(word)))
            validWords++;
    }

    return validWords;
}