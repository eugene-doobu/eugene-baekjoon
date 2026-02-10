using System;
using System.Collections.Generic;
using System.Text;

namespace CshpartAlgo
{
    internal class Program
    {
        static bool[] isused1 = new bool[40];
        static bool[] isused2 = new bool[40];
        static bool[] isused3 = new bool[40];
        static int cnt;
        static int n;

        static void Func(int cur)
        {
            if (cur == n) { cnt++; return; }
            for (int i = 0; i < n; i++)
            {
                if (isused1[i] || isused2[i + cur] || isused3[cur - i + n - 1])
                    continue;
                isused1[i] = isused2[i + cur] = isused3[cur - i + n - 1] = true;
                Func(cur + 1);
                isused1[i] = isused2[i + cur] = isused3[cur - i + n - 1] = false;
            }
        }

        static void Main()
        {
            n = int.Parse(Console.ReadLine());
            Func(0);
            Console.Write(cnt);
        }
    }
}
