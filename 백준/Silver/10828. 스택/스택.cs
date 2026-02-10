using System;
using System.Collections.Generic;
using System.Text;

namespace CshpartAlgo
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            int[] stack = new int[n];
            int top = -1;
            StringBuilder sb = new StringBuilder();

            for (int i = 0; i < n; i++)
            {
                string line = Console.ReadLine();

                if (line.StartsWith("push"))
                {
                    int x = int.Parse(line.Split(' ')[1]);
                    stack[++top] = x;
                }
                else if (line == "pop")
                {
                    sb.AppendLine(top == -1 ? "-1" : stack[top--].ToString());
                }
                else if (line == "size")
                {
                    sb.AppendLine((top + 1).ToString());
                }
                else if (line == "empty")
                {
                    sb.AppendLine(top == -1 ? "1" : "0");
                }
                else
                {
                    sb.AppendLine(top == -1 ? "-1" : stack[top].ToString());
                }
            }

            Console.WriteLine(sb.ToString());
        }
    }
}
