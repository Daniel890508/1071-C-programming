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
    printf("體重過輕\n\n");
    
    if(BMI>=18.5 && BMI<24)
    printf("正常範圍\n\n");
    
    if(BMI>=24 && BMI<27)
    printf("體重過重\n\n");
    
    if(BMI>=27 && BMI<30)
    printf("輕度肥胖\n\n");
    
    if(BMI>=30 && BMI<35)
    printf("中度肥胖\n\n");
    
    if(BMI>=35)
    printf("重度肥胖\n\n");
   

    system("PAUSE");
    return 0;
}


