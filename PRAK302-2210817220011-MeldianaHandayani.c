#include <stdio.h>
 int main (){
int bil;
     printf("Masukkan Nilai : ");
     scanf ("%d", & bil);
if (bil>=80){
     printf("A\n");
}
else if (bil>70 && bil <=79){
    printf("B\n");
}
else if (bil >=60 && bil<=69){
    printf("C\n");
}
else if (bil >=50 && bil<= 59){
    printf("D\n");
}
else{
    printf("E\n");
}
main();
    }

