using System;
using System.Collections.Generic;
using System.Text;

namespace CshpartAlgo
{
    internal class Program
    {
        static StringBuilder sb = new StringBuilder();

        static void Func(int a, int b, int n)
        {
            if (n == 1)
            {
                sb.Append(a).Append(' ').Append(b).Append('\n');
                return;
            }
            Func(a, 6 - a - b, n - 1);
            sb.Append(a).Append(' ').Append(b).Append('\n');
            Func(6 - a - b, b, n - 1);
        }

        static void Main()
        {
            int k = int.Parse(Console.ReadLine());
            sb.AppendLine(((1 << k) - 1).ToString());
            Func(1, 3, k);
            Console.Write(sb);
        }
    }
}
