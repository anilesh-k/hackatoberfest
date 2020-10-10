#include<stdio.h>
#include<stdlib.h>
int main()
{
            int q[20],n,head,i,j,k,seek=0,max,diff,s[20];
            float avg;
            printf("Enter the max range of disk\n");
            scanf("%d",&max);
            printf("Enter the size of queue request\n");
            scanf("%d",&n);
            printf("Enter the queue of disk positions to be read\n");
            for(i=1;i<=n;i++)
            scanf("%d",&q[i]);
            printf("Enter the initial head position\n");
            scanf("%d",&head);
            q[0]=head;
            //do it
            for(j=0;j<=n-1;j++)
            {
                        diff=abs(q[j+1]-q[j]);
                        seek=seek+diff;
                        s[j]=q[j+1];
            }
            printf("%d\t",head);
            for(i=0;i<n;i++)
            {
                printf("%d\t",s[i]);
            }
            printf("\nTotal seek time is %d\n",seek);
            avg=seek/(float)n;
            printf("Average seek time is %f\n",avg);
            return 0;
}

