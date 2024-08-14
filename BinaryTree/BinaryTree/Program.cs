using BinaryTree;
using MyBinaryTree;
using System;
namespace BinaryTree
{
    class Beta
    {
        public static void Main()
        {
            //Tree tree = new Tree(6);
            //tree.Insert(2);
            //tree.Insert(8);
            //tree.Insert(1);
            //tree.Insert(5);
            //tree.Insert(7);
            //tree.Insert(12);

            BinaryTree tree = new BinaryTree();
            BinaryNode foundNode = new BinaryNode();
            tree.Insert(5);
            tree.Insert(2);
            tree.Insert(7);
            tree.Insert(2);
            tree.Insert(8);
            tree.Insert(1);
            tree.Insert(5);
            tree.Insert(7);
            tree.Insert(12);
            tree.Delete(2);
            foundNode = tree.Search(2);
            if (foundNode != null)
            {
                Console.WriteLine("Найден узел: " + foundNode.Data);
            }
            else
            {
                Console.WriteLine("Узел не найден.");
            }
            int eva = 5;
        }
    }
}
