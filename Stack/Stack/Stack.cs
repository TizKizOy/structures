using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.CompilerServices;
using System.Text;
using System.Threading.Tasks;

namespace MyFinallySteck
{
    internal class Stack
    {
        private int[] _Array;
        private readonly int _Size;
        private int _Top;

        public Stack()
        {
            this._Array = new int[0];
            this._Size = 0;
            this._Top = 0;
        }

        public Stack(int size)
        {
            this._Size = size;
            this._Array = new int[size];
            this._Top = 0;
        }

        private bool IsEmpty()
        {
            if (this._Top == 0)
                return true;
            else
                return false;
        }

        private bool IsFull()
        {
            if (this._Array.Length == this._Top)
                return true;
            else
                return false;
        }

        public void Push(int value)
        {
            if (IsFull())
                Console.WriteLine("Стек переполнен.");
            else
            {
                this._Array[this._Top] = value;
                this._Top++;
                Console.WriteLine($"Элемент: {value}, добавлен в стек.");
            }
        }

        public void Pop()
        {
            if (IsEmpty())
                Console.WriteLine("Стек пуст.");
            else
            {
                Console.WriteLine($"Элемент: {this._Array[_Top - 1]}, извлекли и удалили из стека.");
                this._Array[_Top] = 0;
                this._Top--;
            }
        }

        public void Peek()
        {
            if (IsEmpty())
                Console.WriteLine("Стек пуст.");
            else
                Console.WriteLine($"Последний элемент стека: {this._Array[this._Top - 1]}");
        }

        public void PrintSteck()
        {
            Console.WriteLine();
            Console.WriteLine("Стек:");
            Console.WriteLine("___");
            for (int i = this._Array.Length - 1; i >= 0; i--)
            {
                Console.WriteLine("|" + this._Array[i] + "|");
            }
            Console.WriteLine("---");
        }
    }
}
