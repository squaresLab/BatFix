public : int lenOfLongestGP ( int sett [ ] , int n ) {
  if ( n < 2 ) return n ;
  if ( n == 2 ) return ( sett [ 1 ] % sett [ 0 ] == 0 ) ? 1 : 0 ;
  sort ( sett , sett + n ) ;
  int L [ n ] [ n ] ;
  int llgp = 1 ;
  for ( int i = 0 ;
  i <= n ;
  i ++ ) {
    if ( sett [ n - 1 ] % sett [ i ] == 0 ) L [ i ] [ n - 1 ] = 2 ;
    else L [ i ] [ n - 1 ] = 1 ;
  }
  for ( int j = n - 2 ;
  j > 0 ;
  j -- ) {
    int i = j - 1 ;
    int k = j + 1 ;
    while ( i >= 0 && k <= n - 1 ) {
      if ( sett [ i ] * sett [ k ] < sett [ j ] * sett [ j ] ) k ++ ;
      else if ( sett [ i ] * sett [ k ] > sett [ j ] * sett [ j ] ) {
        if ( sett [ j ] % sett [ i ] == 0 ) L [ i ] [ j ] = 2 ;
        else L [ i ] [ j ] = 1 ;
        i -- ;
      }
      else {
        L [ i ] [ j ] = L [ j ] [ k ] + 1 ;
        if ( L [ i ] [ j ] > llgp ) llgp = L [ i ] [ j ] ;
        i -- ;
        k ++ ;
      }
    }
    while ( i >= 0 ) {
      if ( sett [ j ] % sett [ i ] == 0 ) L [ i ] [ j ] = 2 ;
      else L [ i ] [ j ] = 1 ;
      i -- ;
    }
  }
  return llgp ;
}
