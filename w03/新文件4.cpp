#include <stdio.h>
#include <stdlib.h>

int main()
{
    float height,m,weight,BMI; 
    printf("======BMI======\n");
    printf("Height(cm):");
    scanf("%f",&height);
    printf("Weight(kg):");
    scanf("%f",&weight);
    printf("===============\n");
    
    m=height/100;
    BMI=weight/(m*m);
    printf("BMI = %.1f\n\n",BMI);
    
    if(BMI<18.5)
    printf("�魫�L��\n\n");
    
    if(BMI>=18.5 && BMI<24)
    printf("���`�d��\n\n");
    
    if(BMI>=24 && BMI<27)
    printf("�魫�L��\n\n");
    
    if(BMI>=27 && BMI<30)
    printf("���תέD\n\n");
    
    if(BMI>=30 && BMI<35)
    printf("���תέD\n\n");
    
    if(BMI>=35)
    printf("���תέD\n\n");
   

    system("PAUSE");
    return 0;
}


