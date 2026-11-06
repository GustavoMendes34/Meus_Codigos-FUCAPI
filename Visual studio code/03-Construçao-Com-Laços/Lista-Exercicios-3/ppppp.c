#include <stdio.h>
int main()
{


int n = 4, fat = 1; int i;
for (i = 1; i <= n; i++) fat *= i;
printf("%d", fat);

return 0;
}