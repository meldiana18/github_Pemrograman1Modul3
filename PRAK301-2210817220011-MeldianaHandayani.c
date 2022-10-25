#include <stdio.h>
 int main ()
 {
  int A, B, C, n1, n2, n3;
printf("Bilangan 1 = ");
    scanf("%d", &A);
printf("Bilangan 2 = ");
    scanf("%d", &B);
printf("Bilangan 3 = ");
    scanf("%d", &C);
if (A<B && B<C){
    n1=A; n2=B; n3=C;
}
else if(A<C && C<B){
    n1=A; n2=C; n3=B;
}
else if(B<A && A<C){
     n1= B; n2=A; n3=C;
}
else if (B<C && C<A){
    n1=B; n2=C; n3=A;
}
else if(C<A && A<B){
    n1= C; n2=A; n3=B;
}
else if (C<B && B<A){
    n1=C; n2=B; n3=A;  
}
printf(" %d %d %d ",  n1, n2, n3);
}