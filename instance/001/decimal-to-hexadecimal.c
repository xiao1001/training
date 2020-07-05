//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-
//
//	decimal-to-hexadecimal.c
//
//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-

#include "decimal-to-hexadecimal.h"

//功能：十进制转换十六进制，递归函数，被调函数decimal_to_hexadecimal
//参数：decimal十进制
//参数：buf缓冲区二级指针
//参数：bits总移动的位数，每次递归移动4个位
static void decimal_to_hexadecimal_recursive(int decimal, char *buf[], int bits){
	//decimal和bits非0时
	if (0 != decimal && 0 != bits){
		decimal_to_hexadecimal_recursive(decimal >> 0x4, buf, bits - 0x4);
		*(*buf)++ = HEXADECIMAL_STRING[decimal & 0xF];
	//输入decimal为0时
	} else if (sizeof(decimal) * 0x8 == bits){
		*(*buf)++ = '0';
	}
}

//功能：十进制转换十六进制
//参数：decimal十进制
//参数：buf缓冲区一级指针
//返回：缓冲区指针buf
extern char* decimal_to_hexadecimal(int decimal, char buf[]){
	//置十六进制前缀
	buf[0] = '0';
	buf[1] = 'x';

	//转换为十六进制
	char *temp = buf + 2;
	decimal_to_hexadecimal_recursive(decimal, &temp, sizeof(decimal) * 0x8);
	*temp = '\0';

	return buf;
}
