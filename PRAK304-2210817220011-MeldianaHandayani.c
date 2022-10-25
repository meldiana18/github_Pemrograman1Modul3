#include <stdio.h>
int main(){
    int a;
     printf("Masukkan Bilangan = ");
     scanf("%d", &a);
if (a<10 && a>0){
   printf("Satuan\n");
}
if (a>=10 && a<20){
    printf("Belasan\n");
}
if (a>=20 && a<100){
    printf("Puluhan\n");
}
if (a==0){
    printf("Nol\n");
}
else if (a>=100){
    printf("Anda Menginput Melebihi Limit Bilangan\n");
}
    main();
}
