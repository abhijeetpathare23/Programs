#include<stdio.h>
void main()
{
int i,j,k,nums=0,num1=0,fault=0,hits=0,flag=0,index,f_size,len;
printf("Enter Page String length : ");
scanf("%d",&len);
printf("Enter frame size : ");
scanf("%d",&f_size);
int arr[len],frame[f_size],ind[f_size];
printf("Enter Page Reference Stream : \n");
for(j=0;j<len;j++)
{
scanf("%d",&arr[j]);
}
for(i=0;i<f_size;i++)
{
frame[i]=arr[i];
fault++;
}
while(i!=len)
{
flag=0;
nums=arr[i];
for(j=0;j<f_size;j++)
{
if(nums==frame[j])
{
flag=1;
}
}
if(flag==1)
{
hits++;
}
else
{
for(j=0;j<f_size;j++)
{
num1=frame[j];
for(k=i-1;k>=0;k--)
{
if(num1==arr[k])
{
ind[j]=k;
break;
}
}
}index=ind[0];
for(j=0;j<f_size-1;j++)
{
for(k=0;k<f_size;k++)
{
if(index>ind[k])
{
index=ind[k];
}
}
}
num1=arr[index];
for(j=0;j<f_size;j++)
{
if(num1==frame[j])
{
frame[j]=nums;
}
}
fault++;
}
i++;
}
printf("\nPage Faults : %d\n",fault);
printf("Page Hits : %d\n",hits);
}
