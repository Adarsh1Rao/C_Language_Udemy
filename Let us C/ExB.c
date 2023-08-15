/*
[B] Point out the errors, if any, in the following C statements:

(a) int = 314.562 * 150 ;
(b) name = ‘Ajay’ ;
(c) varchar = ‘3’ ;
(d) 3.14 * r * r * h = vol_of_cyl ;
(e) k = ( a * b ) ( c + ( 2.5a + b ) ( d + e ) ; 
(f) m_inst = rate of interest * amount in rs ;
(g) si = principal * rateofinterest * numberofyears / 100 ;
(h) area = 3.14 * r ** 2 ;
(i) volume = 3.14 * r ^ 2 * h ;
(j) k = ( (a * b ) + c ) ( 2.5 * a + b ) ;
(k) a = b = 3 = 4 ;
(l) count = count + 1 ;
(m) date = '2 Mar 04' ;


*/

//Answer : 

/*
b- single inverted commas can store only characters not string
 d - Variable should be on LHS of assignment operator
 e - MUltiplication is missing btn expressions and mismatched paranthesis are present
 f- var name cant contain _
 h- MULTIPLICATION is used twice back to back
 i- Power operator must be represented by ** and not ^
 j- multiplication missing
 k- 2VARIABLES CANT STORE EACH OTHER
 m- single quote and string stores only a single character and so printing this var gives last char only

*/