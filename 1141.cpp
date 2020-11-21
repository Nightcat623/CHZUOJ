#include "stdio.h"
#define TOLOW(x) ((x)=(x>='a'&&x<='z') ? (x-32) : (x))
int main()
{
char a[81];
int i;
gets(a);
for (i=0;a[i];TOLOW(a[i]),++i);
printf(a);
return 0;
}
