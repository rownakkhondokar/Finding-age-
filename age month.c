#include<stdio.h>
int main()

{
    int py,pm,pd,cy,cm,cd,age,month,days;
    printf("input your current Year,Months and date:\n");
    scanf("%d%d %d",&cy,&cm,&cd);

    printf("input your birth yrar,month and date:\n");
    scanf("%d%d%d",&py,&pm,&pd);

    if(cd<pd){
        days=(30+cd)-pd;
        pm=pm+1;
    }
    else{
        days=cd-pd;
    }
    if(cm<pm){
        month=(12+cm)-pm;
        py=py+1;
    }
    else{
        month=cm-pm;
    }
    age=cy-py;

    printf("age=%d months=%d days=%d",age,month,days);



    return 0;
}
