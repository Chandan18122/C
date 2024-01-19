//calculate holidays
#include <stdio.h>
int main()
{
    int nf,fd;
    printf("Enter the no. of festivals : ");
    scanf("%d",&nf);
    int hd = 8;
    for(int i=0;i<nf;i++){
        printf("Enter the festival dates : ");
        scanf("%d",&fd);
        if(fd==6||fd==7||fd==13||fd==14||fd==20||fd==21||fd==27||fd==28 ){
            hd=hd;
        }
        else{
            hd = hd +1;
        }
    }
    printf("No. of holidays %d",hd);
    return 0;
}
