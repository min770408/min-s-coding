/*using System;
using System.Reflection;
using System.Reflection.Emit;

namespace EmitTest
{
    public class MainApp
    {
        public static void Main(string[] args)
        {
            AssemblyBuilder newAssembly = AppDomain.CurrentDomain.DefineDynamicAssembly(
            new AssemblyName("CalculatorAssembly"), AssemblyBuilderAccess.Run);

            ModuleBuilder newmodule = newAssembly.DefineDynamicModule("Calculator");

            TypeBuilder newType = newmodule.DefineType("Sum1To100");

            MethodBuilder newmethod = newType.DefineMethod("Calculate", MethodAttributes.Public,
                typeof(int), new Type[0]);

            ILGenerator generator = newmethod.GetILGenerator();

            generator.Emit(OpCodes.Ldc_I4, 1);

            for (int i = 2; i <= 100; i++)
            {
                generator.Emit(OpCodes.Ldc_I4, i);
                generator.Emit(OpCodes.Add);
            }

            generator.Emit(OpCodes.Ret);
            newType.CreateType();

            object sum1To100 = Activator.CreateInstance(newType);

            MethodInfo Calcurate = sum1To100.GetType().GetMethod("Calculate");
            Console.WriteLine(Calcurate.Invoke(sum1To100, null));
        }
    }
}*/