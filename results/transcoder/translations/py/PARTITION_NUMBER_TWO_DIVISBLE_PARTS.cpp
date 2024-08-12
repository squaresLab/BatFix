void findDivision ( string str , int a , int b ) {
  int lenn = str . length ( ) ;
  int lr [ lenn + 1 ] = {
    0 }
    ;
    lr [ 0 ] = ( int ) str [ 0 ] ;
    for ( int i = 1 ;
    i < lenn ;
    i ++ ) lr [ i ] = ( ( lr [ i - 1 ] * 10 ) % a + int ) str [ i ] ;
    int rl [ lenn + 1 ] = {
      0 }
      ;
      rl [ lenn - 1 ] = ( int ) str [ lenn - 1 ] ;
      int power10 = 10 ;
      for ( int i = lenn - 2 ;
      i >= 0 ;
      i -- ) {
        rl [ i ] = ( rl [ i + 1 ] + ( int ) str [ i ] * power10 ) % b ;
        power10 = ( power10 * 10 ) % b ;
      }
      for ( int i = 0 ;
      i <= lenn - 1 ;
      i ++ ) {
        if ( ( lr [ i ] != 0 ) && ( lr [ i ] != 0 ) ) continue ;
        if ( ( rl [ i + 1 ] == 0 ) && ( rl [ i ] != 0 ) ) {
          cout << "YES" ;
          for ( int k = 0 ;
          k <= i + 1 ;
          k ++ ) cout << str [ k ] << " " ;
          cout << "," << " " ;
          for ( int i = i + 1 ;
          i < lenn ;
          i ++ ) {
            cout << str [ k ] << " " ;
            return ;
          }
        }
      }
      cout << "NO" << endl ;
    }
