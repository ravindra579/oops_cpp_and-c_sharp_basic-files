using System;

namespace ConsoleApp4
{
    class Program
    {
        static void Main(string[] args)
        {
            string a;
            a = Console.ReadLine();
            char[] ch = a.ToCharArray();
            char[] ch_1;
            ch_1 = new char[10];
            ch_1 = ch;
            int b = 0;
            int n = ch.Length;
            for(int i = 0; i <n/ 2; i++)
            {
                if(ch[i]!=ch_1[n-1-i])
                {
                    b++;
                }
            }
            if (b == 0)
            {
                Console.WriteLine("palidrome : "+a);
            }
        }
    }
}
