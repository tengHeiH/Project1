#include <stdio.h>
#include <stdlib.h>
#include <graphics.h>
#include <Windows.h>
#include <mmsystem.h>//��������ͷ

#pragma comment(lib,"winmm.lib")//�������ֿ⣬��Ҫ�ӷֺ�
int main(void) {
	////�������ڣ���С
	//initgraph(600, 400);
	////����ͼƬ
	////loadimage(0,"");
	//// ��������
	//mciSendString("play bg.mp3 reapet",0,0,0);
	////����ֹͣ
	//system("pause");
	////closegraph();
	int a, b[10], c=0;
	int len = 0;
	printf("������һ������\n");
	scanf_s("%d", &a);
	for (int i = 1; i <= a; i++) {
		b[i] = i;
		c += b[i];
	}
	
	printf("�ܺ�:%d", c);
	system("pause");
	return 0;
}