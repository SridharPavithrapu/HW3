#include<stdio.h>

void main()
{
	unsigned char arr[8];
	unsigned char arr2[8];
	int i; 
	/* Initializing the values of the array */
	arr[0] = 0xEE;
	arr[1] = 0x12;
	arr[2] = 0x77;
	arr[3] = 0xBE;
	arr[4] = 0x66;
	arr[5] = 0x54;
	arr[6] = 0x33;
	arr[7] = 0xF0;
	
	for(i=0;i<8;i++)
	{
		arr2[i]=arr[i];
	}

	/* Executing the statements */
	unsigned char * ptr = arr;
	
	
	*ptr = 0xF1 & 127;
	ptr++;
	*ptr += 17;
	ptr += 2;
	*ptr = 15 % 4;
	ptr--;
	*ptr >>= 4;
	ptr = &arr[5];
	*ptr = (1<<5)|(4<<2);
	*(&arr[7]) = 22;
	ptr = &arr[0];

	printf("\n---------------------------------------------------|");
	printf("\n|Address        |     Data     | Data After        |");
	printf("\n---------------------------------------------------|");
	for(i=0;i<8;i++)
	{
		printf("\n|%d            |     %x       | %x                |",(100+i),arr2[i],*(ptr+i));
		printf("\n---------------------------------------------------|"); 
	}            
	
	printf("\n");

}
