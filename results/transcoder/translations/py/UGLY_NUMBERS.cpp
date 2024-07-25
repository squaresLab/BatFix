int getNthUglyNo ( int n ) {
  int ugly [ n ] = {
    0 }
    ;
    ugly [ 0 ] = 1 ;
    int i2 = i3 = i5 = 0 ;
    int next_multiple_of_2 = 2 ;
    int next_multiple_of_3 = 3 ;
    int next_multiple_of_5 = 5 ;
    for ( int l = 1 ;
    l < n ;
    l ++ ) {
      ugly [ l ] = min ( next_multiple_of_2 , next_multiple_of_3 , next_multiple_of_5 ) ;
      if ( ugly [ l ] == next_multiple_of_2 ) {
        i2 ++ ;
        next_multiple_of_2 = ugly [ i2 ] * 2 ;
      }
      if ( ugly [ l ] == next_multiple_of_3 ) {
        i3 ++ ;
        next_multiple_of_3 = ugly [ i3 ] * 3 ;
      }
      if ( ugly [ l ] == next_multiple_of_5 ) {
        i5 ++ ;
        next_multiple_of_5 = ugly [ i5 ] * 5 ;
      }
    }
    return ugly [ n - 1 ] ;
  }
  