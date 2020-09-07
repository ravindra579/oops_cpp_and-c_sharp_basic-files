using System;
using System.Collections.Generic;

namespace ConsoleApp2
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] a;
            a = new int[3];
            string  b, c, d;
            Console.WriteLine("input:");
            b = Console.ReadLine();
            a[0] = Convert.ToInt32(b);
            c = Console.ReadLine();
            a[1] = Convert.ToInt32(c);
            d = Console.ReadLine();
            a[2] = Convert.ToInt32(d);
            Array.Sort(a);
            Console.WriteLine("max =" + a[2]);
            Console.WriteLine("min =" + a[0]);
        }
    }
}
