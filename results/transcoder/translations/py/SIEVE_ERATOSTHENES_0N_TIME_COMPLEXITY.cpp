void manipulated_seive ( int N ) {
  isprime [ 0 ] = isprime [ 1 ] = false ;
  for ( int i = 2 ;
  i < N ;
  i ++ ) {
    if ( isprime [ i ] == true ) {
      prime . push_back ( i ) ;
      SPF [ i ] = i ;
    }
    int j = 0 ;
    while ( ( j < prime . size ( ) ) && i * prime [ j ] < N && prime [ j ] <= SPF [ i ] ) {
      isprime [ i * prime [ j ] ] = false ;
      SPF [ i * prime [ j ] ] = prime [ j ] ;
      j ++ ;
    }
  }
}
