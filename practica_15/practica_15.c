#include <stdio.h>
#include <string.h>
#define MAX 6

int main(void) {
    int currDay = 1;
    int Day_COUNT = 10;
    int i = 0;
    int j = 0;
    int count = 5;
    int temp;
    int tempcout = 0;
    char emperorName[50];
    int choice;
    int searchIndex = -1;
    char tempName[20];
    char name[MAX][20] = {"Diaochang", "Yangyuhuang", "Buzhihuowu", "Xishi","Youjiang"};
    //Feizi espacio de level
    char levelNames[5][20] = {"Guiren", "Pingfei", "Guifei", "Huangfei", "Huanghou"};
    //Feizi level
    int levels[] = {1, 0, 0, 0, 3, -1};
    //Loves haogan
    int loves[] = {100, 100, 100, 100, 100, -1};
    printf("El nombre de Emperor que quieres utilizar: ");
    scanf("%s", emperorName);//Los letras no necesita &.
    
    while(i < Day_COUNT) {    
        printf("El dia %d\n",currDay++);
        printf("1. Agregar una nueva Feizi: \t\t(Agregar) \n");
        printf("2. Acariciar una Feizi: \t\t(cambiar estado) \n");
        printf("3. meter Lenggong! \t\t(Eliminar) \n");
        printf("4. Invitar una Feizi a cenar. \n");
        printf("Elijas lo que quieres hacer: ");
        scanf("%d",&choice);
        switch(choice) {
            case 1:
                printf("1.Agregar una nueva Feizi \t\t(Agregar) \n");
                if(count < MAX) {
                    printf("Introduce el nombre de nueva Feizi: \n");
                    scanf("%s", name[count]);
                    levels[count] = 0;
                    loves[count] = 100;
                    count++;
                }else {
                    printf("No cabe mas Feizi\n");
                }
                break;

            case 2:
                printf("2. Acariciar una Feizi \t\t(cambiar estado) \n");
                printf("Emperor %s ,hoy a quien quieres acariciar? \n", emperorName);
                scanf("%s", tempName);
                //buscar strcmp. necesita (#include string.h)
                //(strcmp(tempName,"abc") 0- dos iguales 1- adelante > atras -1 adelante < atras
                for(i = 0; i < count; i++) {
                    if(strcmp(tempName,name[i]) == 0){
                        loves[i] += 10;
                        levels[i] = levels[i] >= 4 ? 4 : levels[i] + 1;
                    }else {
                        loves[i] -= 10;
                    }
                }
                break;

            case 3:
                printf("3. meter Lenggong! \t\t(Eliminar) \n");
                printf("Emperor %s , a quien quieres meter Lenggong? \n", emperorName);
                scanf("%s", tempName);
                for(i = 0; i < count; i++) {
                    if(strcmp(tempName,name[i]) == 0){
                        searchIndex = i;
                        break;
                    }
                }
                if(-1 == searchIndex){
                    printf("Error,no hay feizi que quieres buscar!\n");
                }else{
                    for(i = searchIndex; i < count -1; i++){
                        //name[i] = name[i + 1]; son letras,en c no admide asignacion directa
                        strcpy(name[i],name[i + 1]);
                        loves[i] = loves[i + 1];
                        levels[i] = levels[i + 1];
                    }
                    count --;
                    for(i = 0; i < count; i++){
                        loves[i] += 10;
                    }
                }
                break;

            case 4:
                printf("4. Invitar una Feizi. \n");
                for(i = 0; i < count; i++) {
                    if(strcmp(tempName,name[i]) == 0){
                        loves[i] += 20;
                        levels[i] = levels[i] >= 4 ? 4 : levels[i] + 1;
                    }else {
                        loves[i] -= 0;
                    }
                }
                break;

            default:
                printf("Error");
        }

        //排序妃子的好感度
        for(i = 0; i < count -1; i++){
            for(j = 0; j < count -i -1; j++){
                if(loves[j] < loves[j +1]){
                    temp = levels[j];
                    levels[j] = levels[j + 1];
                    levels[j + 1] = temp;
                    temp = loves[j];
                    loves[j] = loves[j +1];
                    loves[j + 1] = temp;
                    strcpy(tempName,name[j]);
                    strcpy(name[j],name[j + 1]);
                    strcpy(name[j + 1],tempName);
                }
            }
        }

        printf("El estado de Feizi\n");
        printf("Nombre\t    Level\tLove\n");
        for(i = 0; i < count; i++) {
            printf("%-12s%s\t%d\n",name[i],levelNames[levels[i]],loves[i]);
        }
        printf("\n");
        for(i = 0; i < count; i++){
            if(loves[i] < 60)
                tempcout ++;
        }
        if(tempcout >= 3){
            printf("Feizi men estan enfadada y van asesinar emperor.\n");
            printf("Feizi men se han conseguido, Emperor dead.\n");
            break;
        }
        i++;
    }
}