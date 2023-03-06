string case1 = "()"; // true
string case2 = "()[]{}"; // true
string case3 = "(]"; // false
string case4 = ""; // false
string case5 = "10"; // false
string case6 = "d";//false

Console.WriteLine(IsValid(case1));
Console.WriteLine(IsValid(case2));
Console.WriteLine(IsValid(case3));
Console.WriteLine(IsValid(case4));
Console.WriteLine(IsValid(case5));
Console.WriteLine(IsValid(case6));

bool IsValid(string s)
{
    if (string.IsNullOrEmpty(s) || !IsParentheses(s)) return false;

    Stack<char> stack = new Stack<char>();
    foreach (char c in s)
    {
        if (c == '(') stack.Push(')');
        else if (c == '{') stack.Push('}');
        else if (c == '[') stack.Push(']');
        else if (stack.Count == 0 || stack.Pop() != c) return false;
    }

    return stack.Count == 0;
}

bool IsParentheses(string s)
{
    if (s.Contains("(") ||
       s.Contains(")") ||
       s.Contains("[") ||
       s.Contains("]") ||
       s.Contains("{") ||
       s.Contains("}"))
        return true;

    return false;
}