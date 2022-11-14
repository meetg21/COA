#include <stdio.h>
#include <stdlib.h>


int pr[20];
int num[3]={-1}; int count[3]={0};

int main() 
{
    int m,hit=0,f=0,j,i,k,l,fram;
    printf("Number of frames: ");
    scanf("%d",&fram);

    int a[1][fram];

    printf("Length of reference string: "); 
    scanf("%d",&m);

    for(j=0;j<fram;j++)
    { 
        a[0][j]=-1;
    }

    printf("Enter Reference string:"); 

    for(i=0;i<m;i++)
    {
        scanf("%d",&pr[i]); 
    }

    printf("\n");
    printf("Output is:\n");
    int c=0; 

    while(c<m) 
    {
        int p = pr[c];
        if(a[0][0]!=-1 && a[0][1]!=-1 && a[0][2]!=-1) 
        {
            if(p!=num[0] && (p!=num[1] && p!=num[2]))
            { 
                if((a[0][1]==pr[c-1]&&a[0][2]==pr[c-2])||(a[0][1]==pr[c-2]&&a[0][2]==pr[c-1]))
                {
                    a[0][0]=-1;
                    count[0]=0; 
                }

                else if((a[0][0]==pr[c-1]&&a[0][2]==pr[c-2])||(a[0][0]==pr[c-2]&&a[0][2]==pr[c-1]))
                { 
                    a[0][1]=-1;
                    count[1]=0; 
                }

                else
                { 
                    a[0][2]=-1; count[2]=0;
                } 
            }

        }

        for(j=0;j<fram;j++) 
        {
            if(a[0][j]== -1) 
            {
                a[0][j] = p;
                f++;
                num[j]=p; 

                for(k=0;k<fram;k++)
                {
                    if(a[0][k]>=0)
                    { 
                        count[k]++;
                    } 
                }

                break; 
            }

            else if(a[0][j]== p) 
            {
                hit++; 
                for(k=0;k<fram;k++)
                {
                    if(a[0][k]>=0)
                    { 
                        count[k]++;
                    } 
                }
                break; 
            }
        } 
        for(l=0 ;l<fram;l++)
        { 
            if(a[0][l]==-1)
            {
                printf(" "); 
            }
            else
            {
                printf("%d ",a[0][l]);
            } 
        }
        printf("\n");
        c++;
    }

    // printing hits, misses and hit ratio
    printf("\n");
    printf("\nNumber of Hits : %d ",hit); 
    printf("\nFaults : %d ",f); 
    double ratio = (double)hit/m;
    printf("\nHIT Ratio is: %.2lf",ratio);
    return 0; 
}


