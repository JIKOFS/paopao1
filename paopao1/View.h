#pragma once
#include<iostream>

	/*
	* 功能：打印开始界面  帮助 排行榜 开始游戏 音乐开关 四个按键
	*		除开音乐开关其余点击后均打开新的界面，音乐开关点击后通过显示的 on off来打开和关闭音乐
	* 参数：
	* 返回值：
	*		0 打印失败
	*		1 打印成功
	*/
	bool showStar(); 
	/*功能：打印游戏界面  获取键盘/鼠标按键判断
	*		积分模式  歼灭模式 吃金币模式的地图和玩家的信息框
	*/
	bool showGame();  
	/*功能：打印帮助界面
	* 
	*/
	void showHelp();
	/*功能：打印游戏选择界面  鼠标获取
	*		游戏模式选择  人物id的设置
	*/
	void showGameChoose();
