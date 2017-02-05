#include <stdio.h>
#include <stdint.h>


void main()
{
	/* Printing the sizes for different data types */
	printf("Size of char        :: %ld \n",sizeof(char));
	printf("Size of int         :: %ld \n",sizeof(int));
	printf("Size of float       :: %ld \n",sizeof(float));
	printf("Size of double      :: %ld \n",sizeof(double));
	printf("Size of short       :: %ld \n",sizeof(short));
	printf("Size of long        :: %ld \n",sizeof(long));
	printf("Size of long int    :: %ld \n",sizeof(long int));
	printf("Size of long long   :: %ld \n",sizeof(long long));
	printf("Size of int8_t      :: %ld \n",sizeof(int8_t));
	printf("Size of uint8_t     :: %ld \n",sizeof(uint8_t));
	printf("Size of uint16_t    :: %ld \n",sizeof(uint16_t));
	printf("Size of uint32_t    :: %ld \n",sizeof(uint32_t));
	printf("Size of char *      :: %ld \n",sizeof(char *));
	printf("Size of int *       :: %ld \n",sizeof(int *));
	printf("Size of float *     :: %ld \n",sizeof(float *));
	printf("Size of void *      :: %ld \n",sizeof(void *));
	printf("Size of void **     :: %ld \n",sizeof(void **));
	printf("Size of int8_t *    :: %ld \n",sizeof(int8_t *));
	printf("Size of int16_t *   :: %ld \n",sizeof(int16_t *));
	printf("Size of int32_t *   :: %ld \n",sizeof(int32_t *));
	printf("Size of size_t      :: %ld \n",sizeof(size_t));
}
