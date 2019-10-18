/*using System;  

namespace Generic
{
    class MyList<T>
    {
        private T[] array;

        public MyList()
        {
            array = new T[3];
        }

        public T this[int index]
        {
            get
            {
                return array[index];
            }

            set
            {
                if (index <= array.Length)
                {
                    Array.Resize<T>(ref array, index + 1);
                    Console.WriteLine($"Array Resized : {array.Length}");
                }

                array[index] = value;
            }
        }

        public int Length
        {
            get { return array.Length; }
        }
    }

    class MainApp
    {
        static void Main(string[] args)
        {
            MyList<string> str_lsit = new MyList<string>();
            str_lsit[0] = "abc";
            str_lsit[1] = "def";
            str_lsit[2] = "ghi";
            str_lsit[3] = "jkl";
            str_lsit[4] = "mno";

            for (int i = 0; i < str_lsit.Length; i++)
            {
                Console.WriteLine(str_lsit[i]);
            }

            Console.WriteLine();

            MyList<int> int_list = new MyList<int>();
            int_list[0] = 0;
            int_list[1] = 1;
            int_list[2] = 2;
            int_list[3] = 3;
            int_list[4] = 4;

            for (int i = 0; i < int_list.Length; i++)
            {
                Console.WriteLine(int_list[i]);
            }
        }
    }
}*/