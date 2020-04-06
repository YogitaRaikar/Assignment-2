#include <stdio.h>
#include <stdlib.h>
int i,num,t2=-1,t3=-1,t4=-1,t5=-1,t1=1;
int a1[50],b1[50],c1[50],d1[50],e1[50];
int tower(int n,char s,char t,char d, int dis,int num)
{
    if(n==0)
        return 0;
    tower(n-1,s,d,t,dis,num);

    if(t1==1){
        for(i=num;i>t1;i--)         //status of tower A
        a1[i]=i;
     }

     //storing the status of destination tower
    if(d=='a')
        a1[--t1]=n+dis;
    if(d=='b')
        b1[++t2]=n+dis;
    if(d=='c')
        c1[++t3]=n+dis;
    if(d=='d')
        d1[++t4]=n+dis;
    if(d=='e')
        e1[++t5]=n+dis;

   //storing the status of source tower
    if(s=='a')
       ++t1;
    if(s=='b')
        --t2;
    if(s=='c')
        --t3;
    if(s=='d')
        --t4;
    if(s=='e')
        --t5;

 printf("\nMove disk %d from %c to %c\n",n+dis,s,d);
 //display status of 5 towers
 printf("\nTower A: ");
    for(i=t1;i<=num;i++)
        printf("%d\t",a1[i]);
 printf("\nTower B: ");
    for(i=t2;i>=0;i--)
        printf("%d\t",b1[i]);
 printf("\nTower C: ");
    for(i=t3;i>=0;i--)
        printf("%d\t",c1[i]);
 printf("\nTower D: ");
    for(i=t4;i>=0;i--)
        printf("%d\t",d1[i]);
 printf("\nTower E: ");
    for(i=t5;i>=0;i--)
        printf("%d\t",e1[i]);
        printf("\n");

tower(n-1,t,s,d,dis,num);
    return 0;
}
int main(int argc,char *argv[])
{
int n,i;
float n1;
n=atoi(argv[1]);       //n=number of disks
if(n>0){
n1=n;

printf("Initial status of tower:\nTower A:");
for(i=1;i<=n;i++)
    printf("%d\t",i);
    printf("\nTower B:\n");
    printf("Tower C:\n");
    printf("Tower D:\n");
    printf("Tower E:\n");

printf("\nSequence of disk\n");
tower(n/3,'a','e','c',0,n);            //Move top(n/3) disks from A to C using E
printf("\n");
tower(n/3,'a','e','d',n/3,n);          //Move middle(n/3) disks from A to D using E
printf("\n");
if(n1/3>n/3)                            //executes if n is not a multiple of 3
{
 tower((n1/3)>((n/3)+0.5)?n/3+2:n/3+1,'a','e','b',n/3*2,n);          //Move bottom(n/3) disks from A to B using E
printf("\n");
}
else                                    //executes if n is a multiple of 3
    {
tower(n/3,'a','e','b',n/3*2,n);                                      //Move bottom(n/3) disks from A to B using E
printf("\n");
    }
tower(n/3,'d','e','b',n/3,n);           //Move middle(n/3) disks from D to B using E
printf("\n");
tower(n/3,'c','e','b',0,n);             //Move top(n/3) disks from C to B using E
}
else
    printf("Invalid Input\n");
return 0;
}
