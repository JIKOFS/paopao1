#pragma once
#include "PlayerModel.h"
	/*功能：通过W或者上移动玩家
	*		移动过程中可会碰见 墙 道具 炸弹，放炸弹
	* 参数：p玩家 m地图
	* 返回值：无
	*/
	void PlayerUp(PlayerModel &p);
	/*功能：通过W或者上移动玩家
	*		移动过程中可会碰见 墙 道具 炸弹，放炸弹
	* 参数：p玩家 m地图
	* 返回值：无
	*/
	void PlayerDown(PlayerModel&p);
	/*功能：通过W或者上移动玩家
	*		移动过程中可会碰见 墙 道具 炸弹，放炸弹
	* 参数：p玩家 m地图
	* 返回值：无
	*/
	void PlayerLef(PlayerModel p);
	/*功能：通过W或者上移动玩家
	*		移动过程中可会碰见 墙 道具 炸弹，放炸弹
	* 参数：p玩家 m地图
	* 返回值：无
	*/
	void PlayerRight(PlayerModel p);

	/*功能：道具获取  获取道具后直接使用道具 获取道具后需要将地图的参数修改
	* 参数：id 道具的id号 m 地图
	* 返回值：无
	*/
	void ToolUse(int id);

	/*功能：道具掉落  在摧毁墙体后掉落道具
	*/
	void ToolPut();


	/*功能：炸弹爆炸  在放置炸弹后4秒炸弹开始爆炸 
	*		炸死玩家 炸毁墙体 炸毁道具
	*/
	void Bomb();

	/*功能：放置炸弹
	*/
	void BombPut();

	/*功能：计时器 计算游戏时长
	* 返回值：
	*		0 游戏时间已到
	*		1 游戏时间未到
	*/
	int Calculagraph();

	/*功能：玩家复活 在固定点复活玩家（可以有3秒无敌状态）
	* 参数:p玩家
	*/
	void Player(PlayerModel p);

	/*功能：音乐播放 
	* 返回值：
	*		1 音乐播放
	*		0 音乐关闭
	*/
	int Play();