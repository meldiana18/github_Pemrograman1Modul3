#include <stdio.h>
int main(){
    int detik, menit, jam, hari, detik1, n1,n2 ;
     printf("masukkan detik = ");
     scanf("%d", &detik);
         hari= detik/(3600*24);
         n1= detik % (3600*24);
         jam= n1/3600;
         n2= detik % 3600;
         menit = n2/60;
         detik1= detik % 60;
          if (detik>=1 && detik<60){
             printf("00:00:%.2d\n", detik1);
          }
          else if (detik>=60 && detik<3600){
              printf("00 : %.2d : %.2d\n", menit, detik1);
          }
          else if (detik>=3600 && detik <86400){
              printf("%.2d : %.2d : %.2d\n", jam, menit, detik1);
          }
          else {
              printf("%d hari %.2d : %.2d : %.2d\n ", hari, jam, menit, detik1);
          }
}