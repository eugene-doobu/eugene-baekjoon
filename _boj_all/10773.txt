using System;
using System.Collections.Generic;

int K = int.Parse(Console.ReadLine());
Stack<int> stk = new Stack<int>(K);
int sum = 0;

for (int i = 0; i < K; i++)
{
    int num = int.Parse(Console.ReadLine());
    if (num == 0) stk.Pop();
    else stk.Push(num);
}

while (stk.Count != 0)
{
    sum += stk.Pop();
}
Console.Write(sum);
