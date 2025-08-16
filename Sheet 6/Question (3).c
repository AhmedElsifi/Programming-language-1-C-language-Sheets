#include <stdio.h>

void fuel_consumption(int miles,int fuel,float *fuel_consumption_per_mile){
    *fuel_consumption_per_mile=fuel/(float)miles;
}

int main()
{
    int miles,fuel;
    float fuel_consumption_per_mile;
    printf("fuel : ");
    scanf("%d",&fuel);
    printf("miles : ");
    scanf("%d",&miles);
    fuel_consumption(miles,fuel,&fuel_consumption_per_mile);
    printf("the fuel consumption per mile is : %f",fuel_consumption_per_mile);
    
    return 0;
}