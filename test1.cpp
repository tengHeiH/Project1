#include <stdio.h>
#include <stdlib.h>
#include <graphics.h>
#include <Windows.h>
#include <mmsystem.h>//播放音乐头

#pragma comment(lib,"winmm.lib")//播放音乐库，不要加分号
int main(void) {
	////创建窗口，大小
	//initgraph(600, 400);
	////加载图片
	////loadimage(0,"");
	//// 播放音乐
	//mciSendString("play bg.mp3 reapet",0,0,0);
	////窗口停止
	//system("pause");
	////closegraph();
	int a, b[10], c=0;
	int len = 0;
	printf("请输入一个整数\n");
	scanf_s("%d", &a);
	for (int i = 1; i <= a; i++) {
		b[i] = i;
		c += b[i];
	}
	
	printf("总和:%d", c);
	system("pause");
	return 0;
}