A= int(input("Bilangan 1 = "))
B= int(input("Bilangan 2 = "))
C= int(input("Bilangan 3 = "))
if A<B and B<C:
     print(A,B,C)
elif A<C and C<B:
    print(A,C,B)
elif B<A and A<C:
    print(B,A,C)
elif B<C and C<A:
    print (B,C,A)
elif C<A and A<B:
    print(C,A,B)
if  C<B and B<A:
    print(C,B,A)
    
    print("urutan bilangan terkecil adalah ",  A, B, C)


