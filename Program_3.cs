using System;

namespace ConsoleApp1
{
    class Program
    {
        static void Main(string[] args)
        {
            int a, b, c;
                a = 1;
            b = 1;
            Console.WriteLine(a);
            Console.WriteLine(b);
            for(int i = 1; i <= 8; i++)
            {
                c = a + b;
                Console.WriteLine(c);
                a = b;
                b = c;

            }
        }
    }
}
