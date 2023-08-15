// [F] What would be the output of the following programs:


/*

(a) main( )
{
int i = 2, j = 3, k, l ;
float a, b ;
k = i / j * j ;
l = j / i * i ;
a = i / j * j ;
b = j / i * i ;
printf( "%d %d %f %f", k, l, a, b ) ;
}

Output : 0  2  0.0  2.0



__________________________________________________________________________________________________________________________

(b) main( )
{
int a, b ;
a = -3 - - 3 ;
b = -3 - - ( - 3 ) ;
printf ( "a = %d b = %d", a, b ) ;
}

Output :  
-3-(-3)=0
-3 -3=-6

XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
___________________X_______________________________________________________________________________________________________

(c) main( )
{
float a = 5, b = 2 ;
int c ;
c = a % b ;
printf ( "%d", c ) ;
}

Output : Error because mod operator can only be used for integer
XXXXXXXXXXXXXXXXXXXXXXXXXXX
_________________________________________________________________________________________________________________________

(d) main( )
{
printf ( "nn \n\n nn\n" ) ;
printf ( "nn /n/n nn/n" ) ;
}

Output : 
nn

nn
nn/n/n nn/n

_________________________________________________________________________________________________________________
(e) main( )
{
int a, b ;
printf ( "Enter values of a and b" ) ;
scanf ( " %d %d ", &a, &b ) ;
printf ( "a = %d b = %d", a, b ) ;
}

Output : 
Enter values of a and b
scanf reads a and b in %d  format
printf prints again in %d format
__________________________________________________________________________________________________________________________

(f) main( )
{
int p, q ;
printf ( "Enter values of p and q" ) ;
scanf ( " %d %d ", p, q ) ;
printf ( "p = %d q =%d", p, q ) ;
}

Output : 

Error : & Missing here..scanf cant read any data from user

XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
____________________________________________________________________________________________________



[G] Pick up the correct alternative for each of the following
questions:

(a) C language has been developed by
(1) Ken Thompson
(2) Dennis Ritchie                               Yess
(3) Peter Norton
(4) Martin Richards

(b) C can be used on
(1) Only MS-DOS operating system
(2) Only Linux operating system
(3) Only Windows operating system
(4) All the above                                Yess

(c) C programs are converted into machine language with the
help of
(1) An Editor
(2) A compiler                                   Yess
(3) An operating system
(4) None of the above

(d) The real constant in C can be expressed in which of the
following forms
(1) Fractional form only
(2) Exponential form only
(3) ASCII form only
(4) Both fractional and exponential forms        Yess

(e) A character variable can at a time store
(1) 1 character                                  Yess
(2) 8 characters                                 
(3) 254 characters
(4) None of the above

(f) The statement char ch = ‘Z’ would store in ch
(1) The character Z
(2) ASCII value of Z                            Yesss, ascii value in memory location but depend on format specifier
(3) Z along with the single inverted commas
(4) Both (1) and (2)

(g) Which of the following is NOT a character constant
(1) ‘Thank You’
(2) ‘Enter values of P, N, R’
(3) ‘23.56E-03’
(4) All the above                               Yess

(h) The maximum value that an integer constant can have is
(1) -32767
(2) 32767
(3) 1.7014e+38
(4) –1.7014e+38                             //The answer depends on the datatype and programming language

(i) A C variable cannot start with
(1) An alphabet
(2) A number
(3) A special symbol other than underscore
(4) Both (2) & (3) above                    //Yessssssssssss

(j) Which of the following statement is wrong
(1) mes = 123.56 ;
(2) con = 'T' * 'A' ;
(3) this = 'T' * 20 ;
(4) 3 + a = b ;                yess wrong use of assignment operator


(k) Which of the following shows the correct hierarchy of
arithmetic operators in C
(1) **, * or /, + or -                 Yesss this is correct
(2) **, *, /, +, -
(3) **, /, *, +, -
(4) / or *, - or +

(l) In b = 6.6 / a + 2 * n ; which operation will be performed
first?
(1) 6.6 / a              Yes here
(2) a + 2
(3) 2 * n
(4) Depends upon compiler

(m) Which of the following is allowed in a C Arithmetic
instruction
(1) [ ]
(2) { }
(3) ( )               This one
(4) None of the above


(n) Which of the following statements is false
(1) Each new C instruction has to be written on a separate            This is false
line                                                       
(2) Usually all C statements are entered in small case letters
(3) Blank spaces may be inserted between two words in a C
statement
(4) Blank spaces cannot be inserted within a variable name

(o) If a is an integer variable, a = 5 / 2 ; will return a value
(1) 2.5
(2) 3
(3) 2              This is answer
(4) 0

(p) The expression, a = 7 / 22 * ( 3.14 + 2 ) * 3 / 5 ; evaluates to
(1) 8.28
(2) 6.28
(3) 3.14
(4) 0                      This is answer


(q) The expression, a = 30 * 1000 + 2768 ; evaluates to
(1) 32768     This is answer          
(2) -32768
(3) 113040
(4) 0

(r) The expression x = 4 + 2 % - 8 evaluates to
(1) -6
(2) 6                  This
(3) 4 
(4) None of the above

(s) Hierarchy decides which operator
(1) is most important
(2) is used first           //This
(3) is fastest
(4) operates on largest numbers

(t) An integer constant in C must have:
(1) At least one digit                    This
(2) Atleast one decimal point
(3) A comma along with digits
(4) Digits separated by commas

(u) A character variable can never store more than
(1) 32 characters
(2) 8 characters
(3) 254 characters
(4) 1 character                 this

(v) In C a variable cannot contain
(1) Blank spaces
(2) Hyphen
(3) Decimal point
(4) All the above                         this

(w) Which of the following is FALSE in C
(1) Keywords can be used as variable names               this
(2) Variable names can contain a digit
(3) Variable names do not contain a blank space
(4) Capital letters can be used in variable names

(x) In C, Arithmetic instruction cannot contain
(1) variables
(2) constants
(3) variable names on right side of =
(4) constants on left side of =                     this

(y) Which of the following shows the correct hierarchy of
arithmetic operations in C
(1) / + * -
(2) * - / +
(3) + - / *
(4) * / + -                this

(z) What will be the value of d if d is a float after the operation
d = 2 / 7.0?
(1) 0
(2) 0.2857           this
(3) Cannot be determined
(4) None of the above

*/