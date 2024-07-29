using System;
namespace MyFinallySteck
{
    class Beta
    {
        static void Main()
        {

            Stack stack = new Stack(7);
            stack.PrintSteck();
            stack.Push(1);
            stack.Push(2);
            stack.Push(3);
            stack.Pop();
            stack.Push(4);
            stack.Peek();
            stack.PrintSteck();
            stack.Push(5);
            stack.Push(6);
            stack.Pop();
            stack.Push(7);
            stack.Peek();
            stack.PrintSteck();
            

        }
    }
}