void sortUsingHash ( int a [ ] , int n ) {
  int Max = max ( a ) ;
  int Min = abs ( min ( a ) ) ;
  int hashpos [ Max + 1 ] ;
  int hashneg [ Min + 1 ] ;
  for ( int i = 0 ;
  i <= n ;
  i ++ ) {
    if ( a [ i ] >= 0 ) {
      hashpos [ a [ i ] ] ++ ;
    }
    else {
      hashneg [ abs ( a [ i ] ) ] ++ ;
    }
  }
  for ( int i = Min ;
  i > 0 ;
  i -- ) {
    if ( hashneg [ i ] != 0 ) {
      for ( int j = 0 ;
      j <= hashneg [ i ] ;
      j ++ ) {
        cout << ( - 1 ) << i << " " ;
      }
    }
  }
  for ( int i = 0 ;
  i <= Max ;
  i ++ ) {
    if ( hashpos [ i ] != 0 ) {
      for ( int j = 0 ;
      j <= hashpos [ i ] ;
      j ++ ) {
        cout << i << " " ;
      }
    }
  }
}
