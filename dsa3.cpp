#include<stdio.h>
#include<math.h>
int main()
{
    int n,f,k=0,lim,j;
    scanf("%d",&n);
   int a[n];
    int c=n;
    int m=0;
    while(n)
    {
        int num,i,count=0;
        scanf("%d",&num);
        
        int arr[num];
        
        for(i=0;i<num;i++)
            scanf("%d",&arr[i]);
        float temp;
        int temp1;
           for(i=0;i<num;i++)
           {   int sum=0;
               for(j=i;j<num;j++)
               {
                 sum+=arr[j];
                 temp =sqrt(sum);
                 temp1 =sqrt(sum);
                 if(temp==temp1)
                  count++;
               }
             for(j=i;j<num;j++)
               {
                 sum+=arr[j];
                 temp =sqrt(sum);
                 temp1 =sqrt(sum);
                 if(temp==temp1)
                  count++;
               }
           }
        
        a[m++]=count;
        n--;
    }
         
    for(f=0;f<c;f++)
        printf("Case #%d: %d\n",f+1,a[f]);
        printf("Case #%d: %d\n",f+1,a[f]);
        return 0;
}
} 
