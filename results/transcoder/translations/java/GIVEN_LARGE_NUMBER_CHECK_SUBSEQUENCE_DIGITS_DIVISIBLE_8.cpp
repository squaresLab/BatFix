bool isSubSeqDivisible ( string str ) {
  int i , j , k , l = str . length ( ) ;
  int arr [ l ] ;
  for ( i = 0 ;
  i < l ;
  i ++ ) {
    for ( j = i ;
    j < l ;
    j ++ ) {
      for ( k = j ;
      k < l ;
      k ++ ) {
        if ( arr [ i ] % 8 == 0 ) return true ;
        else if ( ( arr [ i ] * 10 + arr [ j ] ) % 8 == 0 && i != j ) return true ;
        else if ( ( arr [ i ] * 100 + arr [ j ] * 10 + arr [ k ] ) % 8 == 0 && i != j && j != k && i != k ) return true ;
      }
    }
  }
  return false ;
}
