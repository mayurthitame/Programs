
#include"marvellous.h"

int main()
{

	struct Demo obj;
	printf("inside main\n");

	printf("%d\n",MAX);
	printf("size of structure is%d\n",sizeof(obj));
	
	fun();	

	return 0;
}
void fun()
{
	printf("inside fun");
}