#include <stdlib.h>
#include <stdio.h>


int main(void) {
short a[] = {1,2,3};//malloc(sizeof(short) * 10);
short *pa = malloc(sizeof(short) * 3);
*pa=11;
pa[1]=22;
//
//a++;
printf("%i\n", a[0]);
printf("a=%p &a=%p\n", a, &a);

printf("pa=%p &pa=%p\n", pa, &pa);

printf("main=%p &main=%p\n", main, &main);

return 0;

}
