#include<stdio.h>
#define N 5
/*int main (void) {
    double score[N];
    int i;
    for(i = 0; i < N; i++){
        printf("Introducir el numero[%d] de la nota es: ",i + 1);
        scanf("%lf",&score[i]);

    }
    for(i = 0; i < N; i++){
        printf("La nota de numero[%d] es : %.2lf\n", i+1, score[i]);
    }
}*/

/*int main (void) {
    int nums[] = {8, 4, 2, 1, 23, 344, 12};
    int sum = 0;
    double avg;
    int i;
    int searchNum;
    printf("El espacio tienen siguentes numeros: \n");
    for(i = 0; i < 7; i++){
        printf("%d\t",nums[i]);
    }
    printf("\n");
    //la suma 
    for(i = 0; i < 7; i++){
        sum += nums[i];
    }
    avg = sum / 7.0;
    printf("La media del espacio es :%.2f\n", avg);
    
    //SearchNums
    printf("Introduce el numero que quieres buscar es :");
    scanf("%d", &searchNum);
    for(i = 0; i < 7; i++){
        if(searchNum == nums[i]){
            printf("El numero %d que quieres buscar si existe \n",searchNum);
            break;
        }else if(i == 6){
            printf("No existe el numero que quieres buscar\n");
            
        }
    }
/*   if(i == 7){
        printf("No existe el numero que quieres buscar\n");
    }
}*/
/*int main (void) {
    int i,j;
    int temp;//para cambio temporal
    int nums[N] = {16, 25, 9, 90, 23};
    for(i = 0; i < N - 1; i++) {
        for(j = 0; j < N - i - 1; j++){
            if(nums[j] > nums[j + 1]){
            temp = nums[j];
            nums[j] = nums[j + 1];
            nums[j + 1] = temp;
            }

        
        }
    }
    printf("El resultado final es : \n");
    for(i = 0; i < N; i++){
        printf("%d\t",nums[i]);
    }
    printf("\n");
}*/
int main(void){

    int count = 5;//El numero del espacio
    double powers[] = {42322, 45771, 40907, 41234, 40767};
    double deletepower;   // el dato que quiere eliminarel  usario
    int deleteIndex = -1;
    int i, j;
    double insertpower;
    double temp;
    printf("El dato que quieres eliminar : \n");
    scanf("%lf",&deletepower);
    for(i = 0; i < count; i++) {
        if(deletepower == powers[i]) {
            deleteIndex = i;
            break;
        }
    }
    if(-1 == deleteIndex) {
        printf("No hay dato que quieres buscar\n");

    }else {
        for(i = deleteIndex; i < count - 1; i++){
            powers[i] = powers[i + 1];
        }
        count --;
    }
    printf("El resultado final son : \n");
    for(i = 0; i < count; i++){
        printf("%.2lf\t",powers[i]);
    }
    printf("\n");
    printf("Introduce un nuevo dato: ");
    scanf("%lf",&insertpower);
    powers[count] = insertpower;
    count++;
    for(i = 0; i < count; i++) { 
        printf("%.2lf\t",powers[i]);
    }
    printf("\n");
    for(i = 0; i < count -1; i++){
        for(j = 0; j < count - i -1; j++){
            if(powers[j] < powers[j + 1]){
                temp = powers[j];
                powers[j] = powers[j +1];
                powers[j + 1] = temp;
            }
        }
    }
    printf("El resultado final oredenado es : \n");
    for(i = 0; i < count; i++){
        printf("%.2lf\t",powers[i]);
    }
    printf("\n");
}
