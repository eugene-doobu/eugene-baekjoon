using System;
using System.Collections.Generic;

namespace CshpartAlgo
{
    internal class Program
    {
        static void Main()
        {
            var input = Console.ReadLine().Split(' ');
            int n = int.Parse(input[0]);
            int k = int.Parse(input[1]);

            (int weight, int price)[] jewel = new (int, int)[n];
            for (int i = 0; i < n; i++)
            {
                var line = Console.ReadLine().Split(' ');
                jewel[i] = (int.Parse(line[0]), int.Parse(line[1]));
            }
            Array.Sort(jewel);

            int[] bags = new int[k];
            for (int i = 0; i < k; i++)
                bags[i] = int.Parse(Console.ReadLine());
            Array.Sort(bags);

            PriorityQueue<int, int> pq = new PriorityQueue<int, int>();
            long ans = 0;
            int j = 0;

            for (int i = 0; i < k; i++)
            {
                while (j < n && jewel[j].weight <= bags[i])
                {
                    pq.Enqueue(jewel[j].price, -jewel[j].price);
                    j++;
                }
                if (pq.Count > 0)
                    ans += pq.Dequeue();
            }

            Console.Write(ans);
        }
    }
}
