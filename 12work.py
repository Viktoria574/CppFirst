import keyboard  
keyboard.block_key("ctrl") 
keyboard.block_key("alt") 
import random
a=[]#Обозначение матрицы
b=[]#Обозначение диагонали 
for i in range(0, 8):
  c=[]
  for j in range(0, 8):
    c.append(random.randint(1, 101))
  a.append(c)#Заполнение матпицы рандомными числами
s='ABCDEFGH'
w='123456789'
flag=False
print("Введите координаты начала и конца диагонали", end='\n')
while flag==False:
  A, E=input(), input()#Ввод координат начала и конца диагонали
  if (len(A)!=2 or len(E)!=2):
    print("Ошибка, попробуйте снова", end='\n')
  else:
    x, y3=A[0], A[1]
    x1, y4=E[0], E[1]
    if (x in s) and (x1 in s) and  (y3 in w) and (y4 in w):#Проверка на корректность ввода
      y=int(A[1])
      y1=int(E[1])
      flag=True
    else:
      print("Ошибка, попробуйте снова", end='\n')
for k in range(0, 8):
  if s[k]==x:
    X=k#Подмена буквы на цифру
if y>y1:#Анализ вводных данных
  z=-1
  X=y-1
else:
  z=1
for t in range(1, 9):
  for s in range(0, 8):
    if s==X:
      b.append(a[t*(-1)][s])#Нахождение цифр, принадлежащих диагонали
    else:
      a[t*(-1)][s]=0#Замена чисел на 0, если они не принадлежат диагонали
  X+=z
counter=1
b=sorted(b)
if z==-1:#Анализ данных для востановление матрицы
  m=1
else:
  m=0
for t in range(1, 9):
    for s in range(0, 8):
      if a[t*(-1)][s]!=0:
        a[t*(-1)][s]=b[m*(z)]#Востановление матрицы
        m+=1
for i1 in range(0, 8):
  for i2 in range(0, 8):
    print(a[i1][i2], end=' ')#Вывод матрицы
  print()