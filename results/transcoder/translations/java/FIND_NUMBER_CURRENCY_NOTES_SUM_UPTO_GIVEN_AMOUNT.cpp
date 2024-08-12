void countCurrency ( int amount ) {
  int notes [ ] = {
    2000 , 500 , 200 , 100 , 50 , 20 , 10 , 5 , 1 }
    ;
    int noteCounter [ 9 ] ;
    for ( int i = 0 ;
    i < 9 ;
    i ++ ) {
      if ( amount >= notes [ i ] ) {
        noteCounter [ i ] = amount / notes [ i ] ;
        amount = amount - noteCounter [ i ] * notes [ i ] ;
      }
    }
    cout << "Currency Count ->" << endl ;
    for ( int i = 0 ;
    i < 9 ;
    i ++ ) {
      if ( noteCounter [ i ] != 0 ) {
        cout << notes [ i ] << " : " << noteCounter [ i ] << endl ;
      }
    }
  }
