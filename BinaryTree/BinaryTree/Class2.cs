using BinaryTree;
using System;
using System.Collections.Generic;
using System.ComponentModel.Design;
using System.ComponentModel.Design.Serialization;
using System.Data;
using System.Linq;
using System.Security.Cryptography.X509Certificates;
using System.Text;
using System.Threading.Tasks;

namespace MyBinaryTree
{
    internal class Node
    {
        public int Data;
        public Node Right;
        public Node Left;

        public Node()
        {
            this.Data = 0;
            this.Right = null;
            this.Left = null;
        }

        public Node(int value)
        {
            this.Data = value;
            this.Right = null;
            this.Left = null;
        }
    }

    internal class Tree
    {
        public Node Root;//корень

        public Tree()
        {
            this.Root = new Node(0);
        }

        public Tree(int value)
        {
            this.Root = new Node(value);
        }

        public void Insert(int Data)
        {
            if (this.Root == null)
            {
                this.Root = new Node(Data);
            }
            Node Current = Root;
            while (true)
            {
                if (Data < Current.Data)
                {
                    if (Current.Left == null)
                    {
                        Current.Left = new Node(Data);
                        return;
                    }
                    else
                    {
                        Current = Current.Left;
                    }
                }
                else if (Data > Current.Data)
                {
                    if (Current.Right == null)
                    {
                        Current.Right = new Node(Data);
                        return;
                    }
                    else
                    {
                        Current = Current.Right;
                    }
                }
                else
                    return;
            }
        }

        public Node Search(int Data)
        {
            Node Current = Root;
            if (Root == null)
            {
                return Current;
            }

            while (Current != null)
            {
                if (Data == Current.Data)
                {
                    return Current;
                }

                else if (Data < Current.Data)
                {
                    return Current.Left;
                }

                else if (Data > Current.Data)
                {
                    return Current.Right;
                }
            }
            return null;
        }

        public void Delete(int Data)
        {
            if (Root == null)
            {
                Console.WriteLine("Дерево пустое.");
            }

            Node current = Root;
            Node parent = null;

            while (Root != null)
            {
                if (Data == current.Data)
                {
                    if (current.Left == null && current.Right == null)// 1) когда удаляем листик
                    {
                        if (parent == null)
                        {
                            Root = null;
                        }
                        else if (parent.Left == current)
                        {
                            parent.Left = null;
                        }
                        else if (parent.Left == current)
                        {
                            parent.Right = null;
                        }
                    }
                    else if (current.Left == null)
                    {
                        if (parent == null)
                        {
                            Root = null;
                        }
                        else if (parent.Left == current)
                        {
                            parent.Left = current.Left;
                        }
                        else if (parent.Right == current)
                        {
                            parent.Right = current.Right;
                        }
                    }
                    else if (current.Right == null)
                    {
                        if (parent == null)
                        {
                            Root = null;
                        }
                        else if (parent.Left == current)
                        {
                            parent.Left = current.Left;
                        }
                        else if (parent.Right == current)
                        {
                            parent.Right = current.Right;
                        }
                    }
                    else
                    {
                        Node successor = current.Right;// Находим минимальный элемент в правом поддереве
                        while (successor.Left != null)
                        {
                            successor = successor.Left;
                        }

                        // Заменяем данные удаляемого узла данными преемника
                        current.Data = successor.Data;

                        // Удаляем преемника 
                        Delete(successor.Data);
                    }
                    return;

                }
                else if (Data < current.Data)
                {
                    parent = current;
                    current = current.Left;
                }
                else if (Data > current.Data)
                {
                    parent = current;
                    current = current.Right;
                }
            }
        }
    }


}
