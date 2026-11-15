#include<stdio.h>
double calculatebill(int units,double rateperunit,char connectiontype){
    double baseamount=units*rateperunit;
    if(connectiontype=='C'||connectiontype=='c'){
        return baseamount+(baseamount*0.15);
    }
    return baseamount;
}
int main(){
    int unitsused;
    double rate;
    char type;
    scanf("%d %lf %c",&unitsused,&rate,&type);
    double payable=calculatebill(unitsused,rate,type);
    printf("Total Payable Bill=%.2lf BDT\n",payable);
    return 0;
}