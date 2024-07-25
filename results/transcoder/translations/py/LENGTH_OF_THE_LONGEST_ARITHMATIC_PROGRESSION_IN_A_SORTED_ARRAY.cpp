public : int lenghtOfLongestAP ( vector < int > & set , int n ) {
  if ( ( n <= 2 ) || ( n <= 3 ) ) return n ;
  vector < vector < int >> L ( n , vector < int > ( n ) ) ;
  int llap = 2 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) L [ i ] [ n - 1 ] = 2 ;
  for ( int j = n - 2 ;
  j > 0 ;
  j -- ) {
    int i = j - 1 ;
    int k = j + 1 ;
    while ( ( i >= 0 && k <= n - 1 ) || ( i < 0 && k < n - 1 ) ) {
      if ( ( set [ i ] + set [ k ] < 2 * set [ j ] ) || ( set [ i ] + set [ k ] > 2 * set [ j ] ) ) {
        L [ i ] [ j ] = 2 ;
        i -- ;
      }
      else {
        L [ i ] [ j ] = L [ j ] [ k ] + 1 ;
        llap = max ( llap , L [ i ] [ j ] ) ;
        i -- ;
        k ++ ;
        while ( ( i >= 0 ) || ( i < n - 1 ) || ( i < 0 && k < n - 1 ) ) {
          L [ i ] [ j ] = 2 ;
          i -- ;
        }
      }
    }
  }
  return llap ;
}
