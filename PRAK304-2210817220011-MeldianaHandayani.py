a=int(input("Bilangan = " )) 
if a<10 and a>0:
   print("Satuan")
if a>=10 and a<20:
    print("Belasan")
if a>=20 and a<100:
    print("Puluhan")
if a==0:
    print("Nol")
elif a>=100:
    print("Anda Menginput Melebihi Limit Bilangan")