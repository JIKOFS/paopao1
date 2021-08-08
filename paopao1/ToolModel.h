#pragma once
#include<iostream>
class ToolModel
{
	//需要不同的道具对应不同功能的作用
	//道具编号
	int id;
public:
	void setID(int id)
	{
		this->id = id;
	}
	int getID()
	{
		return id;
	}
};