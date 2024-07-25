void sortUsingHash ( int a [ ] , int n ) {
  int max = std :: max ( a , a + n ) ;
  int min = abs ( std :: min ( a , a + n ) ) ;
  int hashpos [ max + 1 ] ;
  int hashneg [ min + 1 ] ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( a [ i ] >= 0 ) {
      hashpos [ a [ i ] ] += 1 ;
    }
    else {
      hashneg [ abs ( a [ i ] ) ] += 1 ;
    }
  }
  for ( int i = min ;
  i > 0 ;
  i -- ) {
    if ( hashneg [ i ] > 0 ) {
      for ( int j = 0 ;
      j < hashneg [ i ] ;
      j ++ ) {
        std :: cout << ( - 1 ) * i << " " ;
      }
    }
  }
  for ( int i = 0 ;
  i <= max ;
  i ++ ) {
    if ( hashpos [ i ] > 0 ) {
      for ( int j = 0 ;
      j < hashpos [ i ] ;
      j ++ ) {
        std :: cout << i << " " ;
      }
    }
  }
}
