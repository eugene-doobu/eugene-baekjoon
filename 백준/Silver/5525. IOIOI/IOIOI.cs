using System;
using System.Collections.Generic;

namespace CshpartAlgo
{
    internal class Program
    {
        static void Main()
        {
            int n = int.Parse(Console.ReadLine());
            int m = int.Parse(Console.ReadLine());
            string s = Console.ReadLine();

            int ans = 0;
            int cnt = 0;
            int i = 0;

            while (i < m)
            {
                if (i + 2 < m && s[i] == 'I' && s[i + 1] == 'O' && s[i + 2] == 'I')
                {
                    cnt++;
                    if (cnt == n)
                    {
                        ans++;
                        cnt--;
                    }
                    i += 2;
                }
                else
                {
                    cnt = 0;
                    i++;
                }
            }

            Console.Write(ans);
        }
    }
}
