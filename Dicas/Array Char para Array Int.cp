read the value as an ascii code, you can write

char a = 'a';
int ia = (int)a;
/* note that the int cast is not necessary -- int ia = a would suffice */
to convert the character '0' -> 0, '1' -> 1, etc, you can write

char a = '4';
int ia = a - '0';
/* check here if ia is bounded by 0 and 9 */
Explanation:
a - '0' is equivalent to ((int)a) - ((int)'0'), which means the ascii values of the characters are subtracted from each other. Since 0 comes directly before 1 in the ascii table (and so on until 9), the difference between the two gives the number that the character a represents.
