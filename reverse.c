#include<stdio.h>
#include<string.h>

//Function Declaration
char reverse(char* str,int length);

//Main Function
int main()
{
	char arr1[]="This is a string.";
	char arr2[]="some NUMmbers12345";
	char arr3[]="Does it reverse \n\0\t correctly?";
	reverse(arr1,17);
	reverse(arr2,18);
	reverse(arr3,30);
	return 0;
}


//Function Definition
char reverse(char *str,int length)
{
	char* firstByte = &str[ 0 ];
	char* lastByte = &str[ length- 1 ];
	while( firstByte < lastByte ) {
	char tmp = *firstByte;
	*firstByte = *lastByte;
	*lastByte = tmp;
	++firstByte;
	--lastByte;}
	printf("\nReverse String::%s\n",str);
}
