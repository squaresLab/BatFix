void printRoman ( int number ) {
  int num [ ] = {
    1 , 4 , 5 , 9 , 10 , 40 , 50 , 90 , 100 , 400 , 500 , 900 , 1000 }
    ;
    char sym [ ] = {
      "I" , "IV" , "V" , "IX" , "X" , "XL" , "L" , "XC" , "C" , "CD" , "D" , "CM" , "M" }
      ;
      int i = 12 ;
      while ( number ) {
        int div = number / num [ i ] ;
        number %= num [ i ] ;
        whilediv ( div ) ;
        cout << sym [ i ] << " " ;
        div -- ;
      }
      i -- ;
    }
