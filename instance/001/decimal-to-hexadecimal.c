//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-
//
//	decimal-to-hexadecimal.c
//
//+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-

#include "decimal-to-hexadecimal.h"

//���ܣ�ʮ����ת��ʮ�����ƣ��ݹ麯������������decimal_to_hexadecimal
//������decimalʮ����
//������buf����������ָ��
//������bits���ƶ���λ����ÿ�εݹ��ƶ�4��λ
static void decimal_to_hexadecimal_recursive(int decimal, char *buf[], int bits){
	//decimal��bits��0ʱ
	if (0 != decimal && 0 != bits){
		decimal_to_hexadecimal_recursive(decimal >> 0x4, buf, bits - 0x4);
		*(*buf)++ = HEXADECIMAL_STRING[decimal & 0xF];
	//����decimalΪ0ʱ
	} else if (sizeof(decimal) * 0x8 == bits){
		*(*buf)++ = '0';
	}
}

//���ܣ�ʮ����ת��ʮ������
//������decimalʮ����
//������buf������һ��ָ��
//���أ�������ָ��buf
extern char* decimal_to_hexadecimal(int decimal, char buf[]){
	//��ʮ������ǰ׺
	buf[0] = '0';
	buf[1] = 'x';

	//ת��Ϊʮ������
	char *temp = buf + 2;
	decimal_to_hexadecimal_recursive(decimal, &temp, sizeof(decimal) * 0x8);
	*temp = '\0';

	return buf;
}
