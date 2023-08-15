/*

[C] Evaluate the following expressions and show their hierarchy.

(a) g = big / 2 + big * 4 / big - big + abc / 3 ;
(abc = 2.5, big = 2, assume g to be a float)
(b) on = ink * act / 2 + 3 / 2 * act + 2 + tig ;
(ink = 4, act = 1, tig = 3.2, assume on to be an int)
(c) s = qui * add / 4 - 6 / 2 + 2 / 3 * 6 / god ;
(qui = 4, add = 2, god = 2, assume s to be an int)
(d) s = 1 / 3 * a / 4 - 6 / 2 + 2 / 3 * 6 / g ;
(a = 4, g = 3, assume s to be an int)

ANSWER :

a= 2/2 + 2*4/2-2+2.5/3
  =1+8/2-2+2.5/3
  =1+4-2+0
  =3

b=4*1/2+3/2*1+2+3.2
 =4/2+3/2*1+2+3.2
 =2+1*1+2+3.2
 =2+1+2+3.2
 =8.2

c =4*2/4-6/2+2/3*6/2
  =2-6/2+2/3*6/2
  =2-3+2/3*6/2
  =2-3+0*6/2
  =2-3+0/2
  =2-3+0
  =-1

d= 1/3*4/4-6/2+2/3*6/g
 =0*4/4-6/2+2/3*6/3
 =0-3+0*6/3
 =0-3+0
 =-3

 
*/