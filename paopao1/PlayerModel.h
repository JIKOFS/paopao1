#pragma once
#include<iostream>
#include<string>
using namespace std;

class PlayerModel
{
	//�������
	string name;
	//�������
	int blood;
	//��һ���
	int score;
	//ը����Ŀ
	int num;
public:
	/*
	* ���ܣ���ʼ����Ҷ��� ����ΪĬ�ϲ�����ʼ��
	* ������nameΪ�����������
	* ����ֵ����
	*/
	PlayerModel(string name);
	/*
	* ���ܣ�ɾ������
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