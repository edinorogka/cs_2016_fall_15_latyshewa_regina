from numpy import mean

#задание 1:
'''для вызова пишем, например, sum1(src).
Можно и свой список вводить'''
src=[1,2,7,3,5,8,4,6,9]
def sfor(list):
s=0
for e in list:
s+=e
return(s)

def swhile(list):
s=0
i=0
while i<len(list):
s+=list[i]
i+=1
return(s)

def srec(list):
if len(list)==1:
return list[0]
return list[-1]+srec(list[:-1])

#задание 2
def pow2(N):
i=0
p=1
while p<=N:
res=[i,p]
p*=2
i+=1
return res

#задание 3:

def mid(list0):
a = len(list0)
return reduce(lambda x, y: x + y, list0) / float(a)

#задание 4: у меня первый член =0, второй =1
def fib(N):
f1=0
f2=1
i=2
while f2<N:
f1,f2,i=f2,f1+f2,i+1
if f2==N:
return i
return -1

#задание 5: рекурсивный факториал
def fact(x):
if x==0:
return 1
return x*fact(x-1)

#задание 6:
'''
src=[1,2,7,3,5,8,4,6,9]
'''
def minmax(list):
imin=imax=0
i=0
while i<len(list):
if list[i]<list[imin]:
imin=i
if list[i]>list[imax]:
imax=i
i+=1
list[imin],list[imax]=list[imax],list[imin]
return list
#задание 7

def ro(x, y, z, i):
import math
l = math.sqrt((y - x) ** 2 + (i - z) ** 2)
return l
