#include <stdio.h>
#include <stdlib.h>
int main()
{
int len, f_size, i = 0, fault = 0, hit = 0, num, j, res = 0, flag;
printf("Enter String Length: ");
scanf("%d", &len);
printf("Enter Frame Size: ");
scanf("%d", &f_size);
int arr[len], frame[f_size];
printf("Enter Stream: \n");
for (j = 0; j < len; j++) {
scanf("%d", &arr[j]);
}
while (i != len)
{
flag = 0;
num = arr[i];
for (j = 0; j < f_size; j++)
{
if (num == frame[j])
{
flag = 1;
}
}
if (flag == 1)
{
hit++;
} else {
frame[res] = num;
res++;
res = res % f_size;
fault++;
}
i++;
}
printf("Page Fault: %d\n", fault);
printf("Page Hits: %d",hit);
return 0;
}
