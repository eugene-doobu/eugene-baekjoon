using System;
using System.Collections.Generic;

namespace CshpartAlgo
{
    internal class Program
    {
        static void Main()
        {
            int n = int.Parse(Console.ReadLine());
            long[] a = new long[n];
            for (int i = 0; i < n; i++)
                a[i] = long.Parse(Console.ReadLine());

            Array.Sort(a);

            int cnt = 0;
            long mxval = -(1L << 62) - 1;
            int mxcnt = 0;

            for (int i = 0; i < n; i++)
            {
                if (i == 0 || a[i - 1] == a[i]) cnt++;
                else
                {
                    if (cnt > mxcnt)
                    {
                        mxcnt = cnt;
                        mxval = a[i - 1];
                    }
                    cnt = 1;
                }
            }

            if (cnt > mxcnt) mxval = a[n - 1];
            Console.Write(mxval);
        }
    }
}
