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
            LinkedList<int> Q = new LinkedList<int>();
            StringBuilder sb = new StringBuilder();

            for (int i = 0; i < n; i++)
            {
                string line = Console.ReadLine();

                if (line.StartsWith("push"))
                {
                    int val = int.Parse(line.Split(' ')[1]);
                    Q.AddLast(val);
                }
                else if (line == "pop")
                {
                    if (Q.Count == 0) sb.AppendLine("-1");
                    else
                    {
                        sb.AppendLine(Q.First.Value.ToString());
                        Q.RemoveFirst();
                    }
                }
                else if (line == "size")
                {
                    sb.AppendLine(Q.Count.ToString());
                }
                else if (line == "empty")
                {
                    sb.AppendLine(Q.Count == 0 ? "1" : "0");
                }
                else if (line == "front")
                {
                    sb.AppendLine(Q.Count == 0 ? "-1" : Q.First.Value.ToString());
                }
                else
                {
                    sb.AppendLine(Q.Count == 0 ? "-1" : Q.Last.Value.ToString());
                }
            }

            Console.WriteLine(sb.ToString());
        }
    }
}
