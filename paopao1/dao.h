#pragma once
#include<iostream>
#include "PlayerModel.h"
using namespace std;
/*功能：将玩家的名称和积分写入文件中
* 参数：p玩家
* 返回值：
*		0 写入成功
*		1 写入失败
*/
int DataWrite(PlayerModel p);

/*功能：将玩家的名称和积分读入程序中
* 返回值：PlayerModel 返回的玩家
*/
PlayerModel DataRead();