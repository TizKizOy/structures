#include "BinaryTreeClass.h"
bool operator<(System::String^ str1, System::String^ str2) {
	return (System::String::Compare(str1, str2) < 0 ? true : false);
}


namespace BinaryThreeProject {
	using namespace System;

	TreeClass::TreeClass()
	{
		this->info = nullptr;
	
	}
	BinaryThreeProject::TreeClass::TreeClass(TreeData^ info)
	{
		this->info = info;
	}

	void BinaryThreeProject::TreeClass::add(TreeData^ info)
	{
		if (this->info == nullptr) {
			this->info = info;
			return;
		}
		if (info->name < this->info->name) {
			if (this->left != nullptr) {
				this->left->add(info);
			}
			else {
				this->left = gcnew TreeClass(info);
			}
		}
		else {
			if (this->right != nullptr) {
				this->right->add(info);
			}
			else {
				this->right = gcnew TreeClass(info);
			}
		}
	}

	void BinaryThreeProject::TreeClass::remove(String^ num)
	{
		TreeClass^ curr = this;
		TreeClass^ parent = nullptr;

		while (curr != nullptr && curr->info->name != num) {
			if (num < this->info->num) {
				parent = curr;
				curr = curr->left;
			}
			else {
				parent = curr;
				curr = curr->right;
			}
		}
		switch (defNodeType(curr, parent))
		{
		case nodeType::oba:
			this->deleteDouble(curr, parent);
			break;
		case nodeType::onlyLeft:
			this->deleteLeft(curr, parent);
			break;
		case nodeType::onlyRight:
			this->deleteRight(curr, parent);
			break;
		case nodeType::listokFromLeft:
			this->deleteListok(curr, parent, true);
			break;
		case nodeType::listokFromRight:
			this->deleteListok(curr, parent, false);
			break;

		default:
			break;
		}

	}

	TreeData^ TreeClass::find(String^ num)
	{
		if (this->info == nullptr) {
			return nullptr;
		}
		if (this->info->name == num) {
			return this->info;
		}
		if (num < this->info->num) {
			if (this->left != nullptr) {
				this->left->find(num);
			}
			else {
				return nullptr;
			}
		}
		else {
			if (this->right != nullptr) {
				this->right->find(num);
			}
			
		}
		return nullptr;
	}

	void BinaryThreeProject::TreeClass::deleteListok(TreeClass^ curr, TreeClass^ parent, bool isLeft)
	{
		if (isLeft) {
			parent->left = nullptr;

		}
		else {
			parent->right = nullptr;

		}
		delete curr;
	}

	void BinaryThreeProject::TreeClass::deleteLeft(TreeClass^ curr, TreeClass^ parent)
	{
		if (curr->left != nullptr) {
			parent->left = curr->left;
		}
		else {
			parent->left = curr->right;
		}
		delete curr;
	}

	void BinaryThreeProject::TreeClass::deleteRight(TreeClass^ curr, TreeClass^ parent)
	{
		if (curr->right != nullptr) {
			parent->right = curr->right;
		}
		else {
			parent->right = curr->left;
		}
		delete curr;
	}

	void TreeClass::deleteDouble(TreeClass^ curr, TreeClass^ parent)
	{
		TreeClass^ tmp = curr->right;
		TreeClass^ tmpParent = curr;

		while (tmp->left != nullptr) {
			tmpParent = tmp;
			tmp = tmp->left;
		}
		delete curr->info;
		curr->info = gcnew TreeData(tmp->info);

		switch (defNodeType(tmp, tmpParent))
		{
		case nodeType::oba:
			this->deleteDouble(tmp, tmpParent);
			break;
		case nodeType::onlyLeft:
			this->deleteLeft(tmp, tmpParent);
			break;
		case nodeType::onlyRight:
			this->deleteRight(tmp, tmpParent);
			break;
		case nodeType::listokFromLeft:
			this->deleteListok(tmp, tmpParent, true);
			break;
		case nodeType::listokFromRight:
			this->deleteListok(tmp, tmpParent, false);
			break;

		default:
			break;
		}
	}

	nodeType BinaryThreeProject::TreeClass::defNodeType(TreeClass^ node, TreeClass^ parent)
	{
		if (node->left != nullptr && node->right != nullptr) {
			return nodeType::oba;
		}
		else {
			if (node->left == nullptr && node->right != nullptr) {
				return nodeType::onlyRight;
			}
			else {
				if (node->left != nullptr && node->right == nullptr) {
					return nodeType::onlyLeft;
				}
				else {
					if (parent->left == node) {
						return nodeType::listokFromLeft;
					}
					else {
						return nodeType::listokFromRight;
					}
				}
			}
		}
	}
}