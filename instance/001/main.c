//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-
//
//	��Ŀ��ʮ����ת��ʮ������
//	ʱ�䣺2020��7��5��
//
//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-

#include <stdio.h>
#include <stdlib.h>
#include "decimal-to-hexadecimal.h"

int main(int argc, char *argv[]){
	//δ��������˳�����
	if (1 == argc){
		printf("no input parameters");
		return 0;
	}

	//��ѭ�������������
	char buf[32];
	for (int count = 1, decimal; NULL != argv[count]; ++count){
		decimal = atoi(argv[count]);
		printf("decimal %d to hexadecimal %s\n", decimal, 
				decimal_to_hexadecimal(decimal, buf));
	}
	
	return 0;
}
