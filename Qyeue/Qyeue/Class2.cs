using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Qyeue
{
    internal class Qyeue2
    {
        private int[] _Array;
        private int _Size;
        private int _Head;
        private int _Back;
        private int _Count;

        public Qyeue2()
        {
            this._Array = new int[0];
            this._Size = 0;
            this._Head = 0;
            this._Back = 0;
            this._Count = 0;
        }

        public Qyeue2(int size)
        {
            this._Array = new int[size];
            this._Size = size;
            this._Head = 0;
            this._Back = 0;
            this._Count = 0;
        }

        bool IsEmpty()
        {
            if (this._Count == 0)
                return true;
            else
                return false;
        }

        bool IsFull()
        {
            if (this._Count == this._Size)
                return true;
            else
                return false;
        }

        public void Push(int value)
        {
            if (IsFull())
                Console.WriteLine("Очередь заполнена.");
            else
            {
                this._Array[this._Back] = value;
                this._Count++;
                this._Back++;
            }
        }

        public void Pop()
        {
            if (IsEmpty())
                Console.WriteLine("Очередб пуста.");
            else
            {
                int value = this._Array[this._Head];
                this._Array[this._Head] = 0;
                this._Count--;
                this._Head++;
            }
        }

        public void Peek()
        {
            if (IsEmpty())
                Console.WriteLine("Очередб пуста.");
            else
            {
                int value = this._Array[this._Back - 1];
                Console.WriteLine($"Последний элемент: {value}.");
            }
        }

        public void PrintQyeue()
        {
            if (IsEmpty())
                Console.WriteLine("Очередб пуста.");
            else
            {
                Console.WriteLine("Очередь: ");
                for (int i = 0; i < this._Array.Length; i++)
                {
                    Console.Write(this._Array[i] + " ");
                }
            }
        }




    }
}
