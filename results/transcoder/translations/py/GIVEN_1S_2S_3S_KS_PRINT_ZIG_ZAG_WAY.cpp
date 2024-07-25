void ZigZag ( int rows , int columns , int * numbers ) {
  int k = 0 ;
  int * arr [ columns ] [ rows ] ;
  for ( int i = 0 ;
  i < rows ;
  i ++ ) {
    if ( ( i % 2 == 0 ) ) {
      int j = 0 ;
      while ( j < columns && numbers [ k ] > 0 ) {
        arr [ i ] [ j ] = k + 1 ;
        numbers [ k ] -- ;
        if ( numbers [ k ] == 0 ) k ++ ;
        j ++ ;
      }
    }
    else {
      int j = columns - 1 ;
      while ( j >= 0 && numbers [ k ] > 0 ) {
        arr [ i ] [ j ] = k + 1 ;
        numbers [ k ] -- ;
        if ( numbers [ k ] == 0 ) k ++ ;
        j -- ;
      }
    }
  }
  for ( int * * i = arr ;
  i < rows ;
  i ++ ) {
    for ( int * * j = i ;
    j < columns ;
    j ++ ) {
      cout << * j << " " ;
    }
    cout << endl ;
  }
}
