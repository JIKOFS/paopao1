#pragma once
#include<iostream>
#include<string>
using namespace std;

class PlayerModel
{
	//玩家名称
	string name;
	//玩家生命
	int blood;
	//玩家积分
	int score;
	//炸弹数目
	int num;
public:
	/*
	* 功能：初始化玩家对象 参数为默认参数初始化
	* 参数：name为玩家输入名称
	* 返回值：无
	*/
	PlayerModel(string name);
	/*
	* 功能：删除对象
	*/
	~PlayerModel();
	void setName(string name)
	{
		this->name = name;
	}
	string getName() 
	{
		return name;
	}
	void setBlood(int blood)
	{
		this->blood = blood;
	}
	int getBlood()
	{
		return blood;
	}

};