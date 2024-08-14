using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Qyeue
{
    internal class Qyeue
    {

        private readonly int[] _Array;
        private int _Size;
        private int _Left;
        private int _Right;
        private int _Count;

        public Qyeue()
        {
            this._Array = new int[0];
            this._Size = 0;
            this._Left = 0;
            this._Right = 0;
            this._Count = 0;
        }

        public Qyeue(int size)
        {
            this._Array = new int[size];
            this._Size = size;
            this._Left = 0;
            this._Right = 0;
            this._Count = 0;
        }

        public bool IsFull()
        {
            if (this._Count == this._Size)
                return true;
            else
                return false;
        }

        public bool IsEmpty()
        {
            if (this._Count == 0)
                return true;
            else
                return false;
        }

        public void Push(int value)
        {
            if (IsFull())
                Console.WriteLine("Очередь переполнена.");
            else
            {
                this._Array[this._Right++] = value;
                Console.WriteLine($"Элемент: {value} добавлен в очередь.");
                this._Count++;
            }
        }

        public void Pop()
        {
            if (IsEmpty())
                Console.WriteLine("Очередь не содержит элементов.");
            else
            {
                int value = this._Array[this._Left];
                this._Array[this._Left] = 0;
                this._Left++;
                Console.WriteLine($"Элемент: {value} извлекли и удалили из очереди.");
                this._Count--;
            }
            if (this._Left == this._Right)
            {
                this._Left = 0;
                this._Right = 0;
            }
        }

        public void Peek()
        {
            if (IsEmpty())
                Console.WriteLine("Очередь не содержит элементов.");
            else
            {
                int value = this._Array[this._Left];
                Console.WriteLine($"Элемент: {value} является верхним элементом.");
            }
        }

        public void PrintQyueu()
        {
            Console.WriteLine("Очередь: ");
            for (int i = 0; i < this._Size; i++)
            {
                Console.Write(this._Array[i] + " ");
            }
            Console.WriteLine();
        }

    }
}
