detik=int(input("Masukkan detik = " )) 
hari= detik/(3600*24)
n1= detik % (3600*24)
jam= n1/3600
n2= detik % 3600
menit =n2/60
detik1= detik % 60
if detik>=1 and detik<60:
      print('00:00: %.2d' % (detik1))
elif detik>=60 and detik<3600:
      print('00 : %.2d : %.2d' % (menit,detik1))
elif detik>=3600 and detik<86400:
      print('%.2d : %.2d : %.2d' %(jam, menit, detik1))
else:
      print('%d hari %.2d : %.2d : %.2d ' %(hari, jam, menit, detik1))