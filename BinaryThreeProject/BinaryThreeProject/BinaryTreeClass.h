#include "BinaryThreeData.h"
#pragma once


namespace BinaryThreeProject {

	using namespace System;


	enum nodeType {
		listokFromRight,
		listokFromLeft,
		onlyLeft,
		onlyRight,
		oba
	};

	public ref class TreeClass
	{
	public:
		TreeClass();
		TreeClass(TreeData^ info);
		TreeData^ info = nullptr;
		TreeClass^ left = nullptr;
		TreeClass^ right = nullptr;

		void add(TreeData^ info);
		void remove(String^ num);
		TreeData^ find(String^ num);

	private:
		void deleteListok(TreeClass^ curr, TreeClass^ parent, bool isLeft);
		void deleteLeft(TreeClass^ curr, TreeClass^ parent);
		void deleteRight(TreeClass^ curr, TreeClass^ parent);
		void deleteDouble(TreeClass^ curr, TreeClass^ parent);
		nodeType defNodeType(TreeClass^ node, TreeClass^ parent);
	};

}
