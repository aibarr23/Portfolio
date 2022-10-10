using System;
using System.Collections.Generic;
using System.Ling;
using System.Text;
using System.Threading.Tasks;

namespace Giraffe
{
    class Program
    {
        static void Main(string[] args)
        {
            SayHi("Mike");
            Console.ReadLine();
        }

        static void SayHi(sttring name)
        {
            Console.WriteLine("Hello User " + name);
        }
    }
}