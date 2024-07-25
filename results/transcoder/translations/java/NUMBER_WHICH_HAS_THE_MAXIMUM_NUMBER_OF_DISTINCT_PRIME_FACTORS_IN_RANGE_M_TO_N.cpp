int maximumNumberDistinctPrimeRange ( int m , int n ) {
  long long factorCount [ n + 1 ] ;
  bool prime [ n + 1 ] ;
  for ( int i = 0 ;
  i <= n ;
  i ++ ) {
    factorCount [ i ] = 0 ;
    prime [ i ] = true ;
  }
  for ( int i = 2 ;
  i <= n ;
  i ++ ) {
    if ( prime [ i ] == true ) {
      factorCount [ i ] = 1 ;
      for ( int j = i * 2 ;
      j <= n ;
      j += i ) {
        factorCount [ j ] ++ ;
        prime [ j ] = false ;
      }
    }
  }
  int max = ( int ) factorCount [ m ] ;
  int num = m ;
  for ( int i = m ;
  i <= n ;
  i ++ ) {
    if ( factorCount [ i ] > max ) {
      max = ( int ) factorCount [ i ] ;
      num = i ;
    }
  }
  return num ;
}
