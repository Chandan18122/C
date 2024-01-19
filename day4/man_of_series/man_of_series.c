//Man of the series(find total , average) of 5 player
#include <stdio.h>

int main()
{
    int p=5, m;
    printf("Enter the no. of match of the series : ");
    scanf("%d",&m);
    int prun[5][m];
    for(int i=0;i<5;i++){
        printf("Enter the player[%d] of %d match runs : ",i+ 1,m);
        for(int j=0;j<m;j++){
            scanf("%d",&prun[i][j]);
        }
    }
    int sum,avg,max=0,smax;
    for(int i=0;i<5;i++){
        sum =0;
        for(int j=0;j<m;j++){
            sum +=prun[i][j];
        }
        avg = sum /m;
        if(avg>max){
            max = avg;
            smax = sum;
        }
        else{
            max = max;
        }
    }
    printf("Man of the series(total= %d,average= %d)",smax,max);
    return 0;
}


