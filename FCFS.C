# include <stdio.h>
typedef struct
{
int id;
int wt;
int bt;
int tt;
}process;
int i;
void fcfs(process p[10],int n)
{
int w=0,sum_wt=0,sum_tt=0;
float avg_wt,avg_tt;
for(i=0;i<n;i++)
{
p[i].wt=w;
p[i].tt=w+p[i].bt;
w+=p[i].bt;
}
for(i=0;i<n;i++)
{
sum_wt+=p[i].wt;
sum_tt+=p[i].tt;
}
avg_wt=(float)sum_wt/n;
avg_tt=(float)sum_tt/n;
for(i=0;i<n;i++)
printf("\n%d\t%d\t%d\t%d",p[i].id,p[i].bt,p[i].wt,p[i].tt);
printf("\naverage waiting time=%f",avg_wt);
printf("\naverage turnaround time=%f",avg_tt);
}
void main()
{
process p[10];
int n;
printf("\n");
printf("\nenter no of processes");
scanf("%d",&n);
for(i=0;i<n;i++)
{
p[i].id=i+1;
printf("\n enter brust time of %d process\n",i+1);
scanf("%d",&p[i].bt);
}
fcfs(p,n);
}

output:
.........
enter no of processes5

 enter brust time of 1 process
