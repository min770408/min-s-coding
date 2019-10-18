/*using System;

namespace DeepCopy
{
    class MyClass
    {
        public int Myfield1;
        public int Myfield2;

        public MyClass DeepCopy()
        {
            MyClass newCopy = new MyClass();
            newCopy.Myfield1 = this.Myfield1;
            newCopy.Myfield2 = this.Myfield2;

            return newCopy;
        }
    }

    class mainApp
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Shallow Copy");

            {
                MyClass source = new MyClass();
                source.Myfield1 = 10;
                source.Myfield2 = 20;

                MyClass target = source;
                target.Myfield2 = 30;

                Console.WriteLine($"{source.Myfield1} {source.Myfield2}");
                Console.WriteLine($"{target.Myfield1} {target.Myfield2}");
            }

            Console.WriteLine("Deep Copy");

            {
                MyClass source = new MyClass();
                source.Myfield1 = 10;
                source.Myfield2 = 20;

                MyClass target = source.DeepCopy();
                target.Myfield2 = 30;

                Console.WriteLine($"{source.Myfield1} {source.Myfield2}");
                Console.WriteLine($"{target.Myfield1} {target.Myfield2}");
            }
        }
    }
}*/