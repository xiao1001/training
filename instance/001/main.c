//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-
//
//	项目：十进制转换十六进制
//	时间：2020年6月25日
//
//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-

#include <stdio.h>
#include <stdlib.h>
#include "decimal-to-hexadecimal.h"

int main(int argc, char *argv[]){
	//未输入参数则退出程序
	if (1 == argc){
		printf("no parameters entered\n");
		return 0;
	}

	//可循环处理命令行参数
	char buf[32];
	for (int count = 1, decimal; NULL != argv[count]; ++count){
		decimal = atoi(argv[count]);
		printf("decimal %d to hexadecimal %s\n", decimal,
				decimal_to_hexadecimal(decimal, buf));
	}
	return 0;
}
