#pragma once
#include<iostream>
#include "PlayerModel.h"
using namespace std;
/*���ܣ�����ҵ����ƺͻ���д���ļ���
* ������p���
* ����ֵ��
*		0 д��ɹ�
*		1 д��ʧ��
*/
int DataWrite(PlayerModel p);

/*���ܣ�����ҵ����ƺͻ��ֶ��������
* ����ֵ��PlayerModel ���ص����
*/
PlayerModel DataRead();