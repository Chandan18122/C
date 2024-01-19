/* write a program to compute electricity bill for domestic & commercial purpose 
    no. of units - reate/unit (0- 50)-1.45,(51-100)-2.85,(101-200)-3.95,(>200)-4.50
    extra Rs 10/- service charge + Rs 0.06
*/
#include <stdio.h>

void main()
{
    char ch;
    printf("Enter the connection type : 'd' for domestic and 'c' for commercial : ");
    scanf("%c",&ch);
    int phase;
    printf("Enter the phase : 1 for the single phase and 3 for the three phase : ");
    scanf("%d",&phase);
    if((phase == 1 || phase ==3) && (ch == 'd'|| ch =='D' || ch == 'c' || ch == 'C' )){
        float unit, bill, pt, total;
        printf("Enter the unit : ");
        scanf("%f",&unit);
        //for domestic connection
        if(ch=='d'|| ch=='D'){
            //for 0-50 unit
            if(unit>0 && unit <= 50){
                bill = unit * 1.45;
            }
            //for 51-100
            if(unit>50 && unit<=100){
                bill = 50 * 1.45 + (unit - 50)* 2.85;
            }
            //for 101-200
            if(unit>100 && unit<=200){
                bill = 50 * 1.45 + 50* 2.85 + (unit - 100)* 3.95;
            }
            //for >200
            if(unit>200){
                bill = 50 * 1.45 + 50* 2.85 + 100* 3.95 +(unit - 200)* 4.5;
            }
            if(phase == 1 ){
                pt = .06*unit;
                if(pt < 20){
                    pt = 20;
                }
            }
            if(phase == 3){
                pt = .06*unit;
                if(pt <50){
                    pt = 50;
                }
            }
        }
        //for commercial connection
        if(ch=='c'|| ch=='C'){
            //for 0-100 unit
            if(unit>0 && unit <= 100){
                bill = unit * 3.95;
            }
            //for >100
            if(unit>100){
                bill = 100* 3.95 +(unit - 100)* 7.0;
            }
            if(phase == 1 ){
                pt = .06*unit;
                if(pt < 50){
                    pt = 50;
                }
            }
            if(phase == 3){
                pt = .06*unit;
                if(pt <100){
                    pt = 100;
                }
            }
        }
        printf("\nBill amount : %.2f",bill);
        int sc = 10;
        printf("\nService charge : %d",sc);
        printf("\nPower tax : %.2f",pt);
        total = bill + sc + pt;
        printf("\nTotal bill amount : %.2f",total);
    }
    else{
        printf("Enter Data is woring.");
    }
}

