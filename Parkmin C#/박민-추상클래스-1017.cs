using System;

namespace AbstractClass
{
    abstract class AbstractBase
    {
        protected void PrivatMethodA()
        {
            Console.WriteLine("AbstractBase.PrivateMethodA()");
        }

        public void PublicMethodA()
        {
            Console.WriteLine("AbstractBase.PublicMethodA()");
        }

        public abstract void AbstractMethodA();
    }

    class Derived : AbstractBase
    {
        public override void AbstractMethodA()
        {
            Console.WriteLine("Derived.AbstractMethodA()");
            PrivatMethodA();
        }
    }
    
    class MainApp
    {
        static void Main(string[] args)
        {
            AbstractBase obj = new Derived();

            obj.AbstractMethodA();
            obj.PublicMethodA();
        }
    }
}
