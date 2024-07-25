void countCurrency ( int amount ) {
  int notes [ ] = {
    2000 , 500 , 200 , 100 , 50 , 20 , 10 , 5 , 1 }
    ;
    int noteCounter [ ] = {
      0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 }
      ;
      cout << "Currency Count -> " ;
      for ( int i = 0 , j = 0 ;
      i < noteCounter ;
      i ++ , j ++ ) {
        if ( amount >= i ) {
          int j = amount / i ;
          amount = amount - j * i ;
          cout << i << " : " << j << endl ;
        }
      }
    }
    