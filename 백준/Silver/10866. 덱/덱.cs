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
            LinkedList<int> DQ = new LinkedList<int>();
            StringBuilder sb = new StringBuilder();


            for (int i = 0; i < n; i++)
            {
                string line = Console.ReadLine();

                if (line.StartsWith("push_back"))
                {
                    int val = int.Parse(line.Split(' ')[1]);
                    DQ.AddLast(val);
                }
                else if (line.StartsWith("push_front"))
                {
                    int val = int.Parse(line.Split(' ')[1]);
                    DQ.AddFirst(val);
                }
                else if (line == "pop_front")
                {
                    if (DQ.Count == 0) sb.AppendLine("-1");
                    else { sb.AppendLine(DQ.First.Value.ToString()); DQ.RemoveFirst(); }
                }
                else if (line == "pop_back")
                {
                    if (DQ.Count == 0) sb.AppendLine("-1");
                    else { sb.AppendLine(DQ.Last.Value.ToString()); DQ.RemoveLast(); }
                }
                else if (line == "size")
                    sb.AppendLine(DQ.Count.ToString());
                else if (line == "empty")
                    sb.AppendLine(DQ.Count == 0 ? "1" : "0");
                else if (line == "front")
                    sb.AppendLine(DQ.Count == 0 ? "-1" : DQ.First.Value.ToString());
                else
                    sb.AppendLine(DQ.Count == 0 ? "-1" : DQ.Last.Value.ToString());
            }

            Console.WriteLine(sb.ToString());
        }
    }
}
