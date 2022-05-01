#include "stdio.h"
#include "stdlib.h" //heapde yer acmak icin

void artirma(){
	static int sayac=0;
	//int sayac=0;
	sayac++;
	printf("%d\n",sayac);
}

int main(){
	artirma();
	artirma();
	artirma();
	
	
	
	int a = 100;

	{

		int a = 10;

		{
				int a = 25;
				printf("%d\n",a);
		}
	
	a++;
	printf("%d\n",a);
	}
	printf("%d",a);
	
	
	int *p = malloc(sizeof(int));
	*p = 500;
	printf("\n%d",*p);
	free(p);
	
	int x = 300;
	double b = 10.25;
	void *obj;
	
	obj = &x;
	printf("\n%d",*(int*)obj);
	
	obj = &b;
	printf("\n%lf",*(double*)obj);
	
	printf("\n%d %d %d %d",++x,x,++x,x++);
	printf("\n%d %d %d %d",++x,x,x++,x++);
	
	return 0;
}