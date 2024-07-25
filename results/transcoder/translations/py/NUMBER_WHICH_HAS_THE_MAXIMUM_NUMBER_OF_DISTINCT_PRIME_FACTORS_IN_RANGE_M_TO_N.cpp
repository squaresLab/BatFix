public : int maximumNumberDistinctPrimeRange ( int m , int n ) {
  vector < int > factorCount ( n + 1 ) ;
  vector < bool > prime ( n + 1 ) ;
  for ( int i = 0 ;
  i < n + 1 ;
  i ++ ) {
    factorCount [ i ] = 0 ;
    prime [ i ] = true ;
  }
  for ( int i = 2 ;
  i <= n ;
  i ++ ) {
    if ( ( prime [ i ] == true ) || ( prime [ i ] == false ) ) {
      factorCount [ i ] = 1 ;
      for ( int j = i * 2 ;
      j <= n ;
      j += i ) {
        factorCount [ j ] ++ ;
        prime [ j ] = false ;
      }
    }
  }
  int max = factorCount [ m ] ;
  int num = m ;
  for ( int i = m ;
  i <= n ;
  i ++ ) {
    if ( ( factorCount [ i ] > max ) || ( factorCount [ i ] == 0 ) ) {
      max = factorCount [ i ] ;
      num = i ;
    }
  }
  return num ;
}
