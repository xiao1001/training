//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-
//
//	decimal-to-hexadecimal.h
//
//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-

#ifndef DECIMAL_TO_HEXADECIMAL_H
	#define DECIMAL_TO_HEXADECIMAL_H
#define HEXADECIMAL_STRING "0123456789ABCDEF"

//���ܣ�ʮ����ת��ʮ������
//������decimalʮ����
//������buf������һ��ָ��
//���أ�������ָ��buf
extern char* decimal_to_hexadecimal(int decimal, char buf[]);

#endif//DECIMAL_TO_HEXADECIMAL_H
