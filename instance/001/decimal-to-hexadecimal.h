//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-
//
//	decimal-to-hexadecimal.h
//
//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-

#ifndef DECIMAL_TO_HEXADECIMAL_H
	#define DECIMAL_TO_HEXADECIMAL_H
#define HEXADECIMAL_STRING "0123456789ABCDEF"

//功能：十进制转换十六进制
//参数：decimal十进制
//参数：buf缓冲区一级指针
//返回：缓冲区指针buf
extern char* decimal_to_hexadecimal(int decimal, char buf[]);

#endif//DECIMAL_TO_HEXADECIMAL_H
