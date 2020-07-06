using System;

namespace PartialClass
{
    partial class Myclass
    {
        public void Method1()
        {
            Console.WriteLine("Method1");
        }

        public void Method2()
        {
            Console.WriteLine("Method2");
        }
    }

    partial class Myclass
    {
        public void Method3()
        {
            Console.WriteLine("Method3");
        }

        public void Method4()
        {
            Console.WriteLine("Method4");
        }
    }

    class MainApp
    {
        static void Main(string[] args)
        {
            Myclass obj = new Myclass();

            obj.Method1();
            obj.Method2();
            obj.Method3();
            obj.Method4();

        }
    }
}
