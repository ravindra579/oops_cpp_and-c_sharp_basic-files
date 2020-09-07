using System;
using System.Globalization;

namespace ConsoleApp3
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("prime numbers :-");
            int[] a;
            a = new int[100];
            for(int i = 1; i <= 100; i++)
            {
                a[i - 1] = i;
            }
            int j = 0;
            while (j < 100) {
                int b = 1;
                for (int i = 2; i <= a[j] / 2; i++)
                {
                    if ((a[j] % i) == 0)
                    {
                        b+=1;
                    }
                }
                if (b == 1 && a[j]!=1)
                {
                    Console.Write(a[j]);
                    Console.Write(",");
                }
                j++;
}
        }
    }
}
