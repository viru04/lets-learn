//14)Write a program in C to remove a file from the disk.
#include <stdio.h>
int main()
{
	int status;
	char fname[20];
	printf("\n\n Remove a file from the disk :\n");
	printf(" Input the name of file to delete : ");
	scanf("%s",fname);
	status=remove(fname);
	if(status==0)
		printf(" The file %s is deleted successfully..!!\n\n",fname);
	else
		printf(" Unable to delete file %s\n\n",fname);
}
