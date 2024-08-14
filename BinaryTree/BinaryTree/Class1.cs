//using BinaryTree2;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using static System.Runtime.InteropServices.JavaScript.JSType;

namespace BinaryTree
{
    public class BinaryNode
    {
        public BinaryNode Left; //указатели узла
        public BinaryNode Right;
        public int Data; //вставляемое значение

        public BinaryNode()
        {
            this.Data = 0;
            this.Right = null;
            this.Left = null;
        }

        public BinaryNode(int value)
        {
            this.Data = value; //конструктор заполняет узел значением
            this.Left = null;
            this.Right = null;
        }

    }
    class BinaryTree
    {
        public BinaryNode Root; // Указатель на корневой узел дерева

        public BinaryTree()
        {
            this.Root = null;
        }

        public BinaryTree(int value)
        {
            this.Root = new BinaryNode(value);
        }

        public void Insert(int value)
        {
            if (Root == null) //Если Root равен null, новый узел становится корневым узлом.
            {
                Root = new BinaryNode(value); // Создаем новый узел и устанавливаем его как корень
                return;
            }

            // Ищем подходящее место для вставки 
            BinaryNode current = Root;
            while (true)
            {
                // Если значение меньше, чем данные текущего узла, 
                // нужно искать место в левом поддереве
                if (value < current.Data)
                {   // Если у текущего узла нет левого потомка, вставляем новый узел
                    if (current.Left == null)
                    {
                        current.Left = new BinaryNode(value); // Создаем новый узел и вставляем его как левый потомок
                        return; // Вставка выполнена
                    }
                    else
                    {
                        current = current.Left; // Переход к левому узлу
                    }
                }
                else if (value > current.Data)
                {
                    if (current.Right == null)
                    {
                        current.Right = new BinaryNode(value);
                        return; // Вставка выполнена
                    }
                    else
                    {
                        current = current.Right; // Переход к правому узлу
                    }
                }
                else
                {
                    return; // Узел с такими данными уже существует
                }
            }
        }

        public BinaryNode Search(int data)
        {
            if (Root == null)
            {
                Root = new BinaryNode(data);
            }

            BinaryNode current = Root;

            while (current != null)
            {
                if (data == current.Data)
                {
                    return current;
                }
                else if (data < current.Data)
                {
                    return current.Left;
                }
                else if (data > current.Data)
                {
                    return current.Right;
                }
            }
            return null;
        }

        public void Delete(int data)
        {
            if (Root == null)
            {
                Console.WriteLine("Дерево пустое.");
                return;
            }

            BinaryNode current = Root;
            BinaryNode parent = null;

            while (current != null)
            {
                if (data == current.Data)//Если data совпадает с данными текущего узла (current.Data), узел найден.
                {   // Случай 1: Узел - лист
                    if (current.Left == null && current.Right == null)
                    {
                        if (parent == null) //Если parent равен null, то узел, который нужно удалить, - корневой. В этом случае Root устанавливается в null.
                        {
                            Root = null;
                        }
                        else if (parent.Left == current)
                        {
                            parent.Left = null; //В противном случае, ссылка parent на удаляемый узел устанавливается в null
                                                //(левый или правый потомок в зависимости от того, где был найден узел).
                        }
                        else if (parent.Right == current)
                        {
                            parent.Right = null;
                        }
                    }
                    // Случай 2: Узел имеет один дочерний узел  
                    else if (current.Left == null)
                    {
                        if (parent == null)
                        {
                            Root = null;
                        }
                        else if (parent.Left == current)
                        {
                            parent.Left = current.Right;
                        }
                        else if (parent.Right == current)
                        {
                            parent.Right = current.Left;
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
                    // Случай 3: Узел имеет два дочерних узла
                    else
                    {
                        BinaryNode successor = current.Right;// Находим минимальный элемент в правом поддереве
                        while (successor.Left != null)
                        {
                            successor = successor.Left;
                        }

                        // Заменяем данные удаляемого узла данными преемника
                        current.Data = successor.Data;

                        // Удаляем преемника 
                        Delete(successor.Data);
                    }

                    return; // Удаление выполнено
                }
                else if (data < current.Data) //Если data меньше, чем current.Data, поиск продолжается в левом поддереве(current = current.Left).
                {
                    parent = current;
                    current = current.Left;
                }
                else if (data > current.Data) //Если data больше, чем current.Data, поиск продолжается в правом поддереве (current = current.Right).
                {
                    parent = current;
                    current = current.Right;
                }

            }

        }

    }
}
