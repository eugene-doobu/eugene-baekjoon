using System;
using System.Collections.Generic;
using System.Text;

namespace CshpartAlgo
{
    internal class Program
    {
        static void Main(string[] args)
        {
            var input = Console.ReadLine().Split(' ');
            int n = int.Parse(input[0]);
            int m = int.Parse(input[1]);

            string[] board = new string[n];
            int[,] dist1 = new int[n, m];
            int[,] dist2 = new int[n, m];

            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    dist1[i, j] = -1;
                    dist2[i, j] = -1;
                }
            }

            for (int i = 0; i < n; i++)
            {
                board[i] = Console.ReadLine();
            }

            Queue<(int x, int y)> Q1 = new Queue<(int x, int y)>();
            Queue<(int x, int y)> Q2 = new Queue<(int x, int y)>();

            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    if (board[i][j] == 'F')
                    {
                        Q1.Enqueue((i, j));
                        dist1[i, j] = 0;
                    }
                    if (board[i][j] == 'J')
                    {
                        Q2.Enqueue((i, j));
                        dist2[i, j] = 0;
                    }
                }
            }

            int[] dx = { 1, 0, -1, 0 };
            int[] dy = { 0, 1, 0, -1 };

            while (Q1.Count > 0)
            {
                var cur = Q1.Dequeue();
                for (int dir = 0; dir < 4; dir++)
                {
                    int nx = cur.x + dx[dir];
                    int ny = cur.y + dy[dir];
                    if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
                    if (dist1[nx, ny] >= 0 || board[nx][ny] == '#') continue;
                    dist1[nx, ny] = dist1[cur.x, cur.y] + 1;
                    Q1.Enqueue((nx, ny));
                }
            }

            while (Q2.Count > 0)
            {
                var cur = Q2.Dequeue();
                for (int dir = 0; dir < 4; dir++)
                {
                    int nx = cur.x + dx[dir];
                    int ny = cur.y + dy[dir];
                    if (nx < 0 || nx >= n || ny < 0 || ny >= m)
                    {
                        Console.Write(dist2[cur.x, cur.y] + 1);
                        return;
                    }
                    if (dist2[nx, ny] >= 0 || board[nx][ny] == '#') continue;
                    if (dist1[nx, ny] != -1 && dist1[nx, ny] <= dist2[cur.x, cur.y] + 1) continue;
                    dist2[nx, ny] = dist2[cur.x, cur.y] + 1;
                    Q2.Enqueue((nx, ny));
                }
            }

            Console.Write("IMPOSSIBLE");
        }
    }
}
