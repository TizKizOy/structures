using System;
using System.Collections;
namespace Qyeue
{
    class Beta
    {
        static void Main()
        {
            //Qyeue qyeue = new Qyeue(5);
            //qyeue.PrintQyueu();
            //qyeue.Push(1);
            //qyeue.Peek();
            //qyeue.Push(2);
            //qyeue.Pop();
            //qyeue.PrintQyueu();
            //qyeue.Push(3);
            //qyeue.Peek();
            //qyeue.Push(4);
            //qyeue.Pop();
            //qyeue.PrintQyueu();
            //qyeue.Push(5);
            //qyeue.PrintQyueu();


            Qyeue2 qyeue = new Qyeue2(5);
            qyeue.PrintQyeue();
            qyeue.Push(1);
            qyeue.Push(2);
            qyeue.Pop();
            qyeue.Push(3);
            qyeue.Peek();
            qyeue.PrintQyeue();
            qyeue.Push(4);
            qyeue.Push(5);
            qyeue.Peek();
            qyeue.Pop();
            qyeue.PrintQyeue();

        }
    }
}