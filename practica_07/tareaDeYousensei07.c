/**
 * Somos bibliotecarios, para facilitar la gestion de libros
 * dicidimos programar un "sistema" para controlarlo.
 * Cada libro tiene su nombre, su precio, su ISBN(10).
 * Y su categoria("accion", "humor", "aventuras"); (2)
 * Si el bibliotecario quiere comprobar que si existe determinado libro
 * responde "si", en el caso de que hay este libro
 * responde "no", en el caso contrario
*/

//身为管理员-> 书的名字，书的价格，书的ISBN，书的类型
//身为用户  -> 书的名字，返回书的所有信息
//借鉴例子  -> Tclientes cliente[2];

/*    char name;
    print("书的名字:");
    scanf("%s", name);
// if(book[1].name == name) {
        printf("书的名字是:%s", book[1].name);
        printf();....
    }*/

//赋值的时候，char类型不需要&
//赋值的时候，int类型需要&

#include <stdio.h>
#include <string.h>

int main(void) {
    typedef struct
    {
        char nombre[20];
        float precio;
        int ISBN;
        char categoria[20];
    }Libro;
 
    Libro libro[2];

    int a = 0;
    //身为管理员-> 书的名字，书的价格，书的ISBN，书的类型
    while(a < 2) {
        printf("El nombre de libro que quieres almacenar es:");
        scanf("%s",libro[a].nombre);                    //libro[0].nombre -> libro[1].nombre -> libro[2].nombre -> libro[a].nombre
        printf("El precio del libro es:");
        scanf("%f",&libro[a].precio);
        printf("El ISBN del libro es:");
        scanf("%d",&libro[a].ISBN);
        printf("El categoria del libro es:");
        scanf("%s",libro[a].categoria);
        a++;
    }
    //打印图书馆所有的书
    int b = 0;
    printf("---------------Datos de Libros---------------\n");
    while(b < 2) {
        printf("\nLibro %d\n", b + 1);
        printf( "El nombre del libro: %s\n"
                "El preio del libro: %.2f\n"
                "El ISBN del libro: %d\n"
                "El categoria del libro: %s\n", libro[b].nombre,libro[b].precio, libro[b].ISBN, libro[b].categoria);
        b++;
    }

    //Y su categoria("accion", "humor", "aventuras");
    //身为用户  -> 书的名字，返回书的所有信息
    char searchBook[10];
    printf("用户，输入你想找的书的名字:");
    scanf("%s", searchBook);

    for(int i = 0; i < 2; i++) {
        int a = 0;
        for(int j = 0; j < strlen(searchBook); j++) {
            if(libro[i].nombre[j] == searchBook[j]){    //xiao - ke
                a = 1;  //找到 bool
            }else {
                a = 0;  //没找到 bool
            }
        }
        if(a == 1) {
            printf( "El nombre del libro: %s\n"
                    "El preio del libro: %.2f\n"
                    "El ISBN del libro: %d\n"
                    "El categoria del libro: %s\n", libro[i].nombre, libro[i].precio, libro[i].ISBN, libro[i].categoria);
            i = 2;
        }
        if(i == 1) {
            printf("No he encontrado este libro\n"); 
        }

        // i
        // [0]      [1]      
        // j
        //[0][1]    [0][1][2]
        // k  e     k   u  o
        // k  a     k   a
    }
    


    /*
    while(c < 2) {
        if(libro[c].nombre == searchBook) {
            if(libro[c].categoria == "accion" || libro[c].categoria == "humor" || libro[c].categoria == "aventuras") {
                printf("He encontrado este libro, los datos realacionados son:\n");
                printf( "El nombre del libro: %s\n"
                        "El preio del libro: %.2f\n"
                        "El ISBN del libro: %d\n"
                        "El categoria del libro: %s\n", libro[c].nombre, libro[c].precio, libro[c].ISBN, libro[c].categoria);
            }
        }else {
            printf("No he encontrado este libro\n");
            break;
        }
    c++;
    }*/
}
