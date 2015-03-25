#include<stdio.h>
int main()
{
int a[100];
int temp,i,temp1,proc,alloc,j,block,count,choice;
int proc_no,k,t,flag,dealloc,cnt;
for(i=0;i<100;i++)
{
a[i]=0;
}
count=0;
alloc=0;
flag=1;
cnt=1;
char ch;
printf("\n enter the block size");
scanf("%d",&block);
proc_no=0;
do
{printf("\n 1. Allocate:first fit");
printf("\n 2. Allocate:next fit");
printf("\n 3. Allocate:best fit");
printf("\n 4. Deallocate");
printf("\n 5. Print");
printf("\n enter option");
scanf("%d",&choice);

switch(choice)
{
case 1:
	flag=1;
	printf("\n enter the process %d size :",proc_no+1);
	scanf("%d",&proc);
	temp=proc;
	while(temp>0)
	{
	 temp=temp-block;
	 count++;
	}
	
	t=0;
	while(flag)
	{
	for(j=t;j<100;j++)
	{
	if(a[j]==0)
	break;
	}
	t=j+1;
	for(i=j;i<100 ;i++)
	{
	if(a[i]!=0)
	break;
	}
	temp1=i-j;
	
	if(temp1>=count)
	{
	for(k=j;k<j+count;k++)
	{
	 a[k]=proc_no+1;
	
	}
	flag=0;
	}
	else
	flag=1;

	}	
	proc_no++;
	count=0;
	break;

case 2:
	flag=1;
	printf("\n enter the process %d size :",proc_no+1);
	scanf("%d",&proc);
	temp=proc;
	while(temp>0)
	{
	 temp=temp-block;
	 count++;
	}
	
	t=dealloc;
	while(flag)
	{
	for(j=t;j<100;j++)
	{
	if(a[j]==0)
	break;
	}
	t=j+1;
	for(i=j;i<100 ;i++)
	{
	if(a[i]!=0)
	break;
	}
	temp1=i-j;
	
	if(temp1>=count)
	{
	for(k=j;k<j+count;k++)
	{
	 a[k]=proc_no+1;
	
	}
	flag=0;
	}
	else
	flag=1;

	}	
	proc_no++;
	count=0;
	break;



case 3:
	flag=1;
	printf("\n enter the process %d size :",proc_no+1);
	scanf("%d",&proc);
	temp=proc;
	while(temp>0)
	{
	 temp=temp-block;
	 count++;
	}
	
	t=0;
	while(flag)
	{
	for(j=t;j<100;j++)
	{
	if(a[j]==0)
	break;
	}
	t=j+1;
	for(i=j;i<100 ;i++)
	{
	if(a[i]!=0)
	break;
	}
	temp1=i-j;
	
	if(temp1>=count)
	{
	for(k=j;k<j+count;k++)
	{
	 a[k]=proc_no+1;
	
	}
	flag=0;
	}
	else
	flag=1;

	}	
	proc_no++;
	count=0;
	break;

case 4:
	printf("which process do u want to deallocate");
	scanf("%d",&i);
	for(j=0;j<100;j++)
	{
	if(a[j]==i)
	{
		a[j]=0;
		if(cnt==1)
		dealloc=j;
		cnt++;
	}
	}
	
	break;

case 5:
	for(i=0;i<100;i++)
	{
		printf(" %d \t",a[i]);
	}
	break;

default:
	printf("Invalid choice!!");

}printf("do u want to cont");
scanf("%c",&ch);
scanf("%c",&ch);
}

while(ch=='y'||ch=='Y');


return 0;
}
