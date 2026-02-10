using System;
using System.Collections.Generic;
using System.Text;

namespace CshpartAlgo
{
    internal class Program
    {
        static void Main(string[] args)
        {
            StringBuilder sb = new StringBuilder();

            while (true)
            {
                string a = Console.ReadLine();
                if (a == ".") break;

                Stack<char> s = new Stack<char>();
                bool isValid = true;

                foreach (char c in a)
                {
                    if (c == '(' || c == '[') s.Push(c);
                    else if (c == ')')
                    {
                        if (s.Count == 0 || s.Peek() != '(') { isValid = false; break; }
                        s.Pop();
                    }
                    else if (c == ']')
                    {
                        if (s.Count == 0 || s.Peek() != '[') { isValid = false; break; }
                        s.Pop();
                    }
                }

                if (s.Count != 0) isValid = false;
                sb.AppendLine(isValid ? "yes" : "no");
            }

            Console.Write(sb);
        }
    }
}
