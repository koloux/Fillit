




0100
0100
0110
0000


1 OCTET:
  x | y
---------
0000 0000
0000 0000
0000 0000
0000 0000

1 OCTET:

  x | y
---------
0000 0000 0000 0000 0000 0000 0000 0000


  TETROMINO:
  0123
0 ..#.
1 ..#.
2 ..##
3 ....
---> 0000 0010 0001 0010 0010 0010 0010 0011
  0123
0 #...
1 #...
2 ##..
3 ....
--> 0000 0000 0001 0000 0010 0000 0010 0001

  i = 1111 1111 1111 1111 1111 1111 1111 1111

  i & 1 << 8 -->  0000 0000 | 0000 0000 0000 0000 0000 0001 0000 0000
	                          1111 1111 1111 1111 1111 1111 0000 0000
                             ----------------------------------------
	                          0000 0000 0000 0000 0000 0001 0000 0000


   i & 15 << 8 --> 0000 0000 | 0000 0000 0000 0000 0000 1111 0000 0000
	                           1111 1111 1111 1111 1111 1111 1111 1111
                             ----------------------------------------
	                           0000 0000 0000 0000 0000 1111 0000 0000

           2
	      ----
i =  0000 0010 0001 0010 0010 0010 0010 0011
3 =  0000 0000 0000 0000 0000 0000 0000 0011

	  a = ~i
---> 1111 1101 1110 1101 1101 0001 1101 1100

	  i & 3 << 128
i    0000 0011 0000 0000 0000 0000 0000 0011
a    0000 0011 1000 1101 1101 1101 1101 1101
----------------------------------------------
     0000 0011 1000 1101 1101 1101 1101 1101

GET VALUE OF 4 BITS

      32   28   24   20   16   12   8    4
	 ---- ---- ---- ---- ---- ---- ---- ----
i =  0000 0010 0001 0010 0010 0010 0010 0011

print 15 & (i >> nth * 4)
nth begin at 0!
example with nth = 2

i =  0000 0000 0000 0010 0001 0010 0010 0010 | 0010 0011
15 = 0000 0000 0000 0000 0000 0000 0000 1111
--------------------------------------------
res: 0000 0000 0000 0000 0000 0000 0000 0010

print(res);

CHANGE THE VALUE (+1)

res   --> 0000 0000 0000 0000 0000 0000 0000 0010  --> 2
res++ --> 0000 0000 0000 0000 0000 0000 0000 0011

i | (res << nth * 4)

i =  0000 0010 0001 0010 0010 0010 0010 0011
res= 0000 0000 0000 0000 0000 0011 0000 0000
--------------------------------------------
i  : 0000 0010 0001 0010 0010 0011 0010 0011
