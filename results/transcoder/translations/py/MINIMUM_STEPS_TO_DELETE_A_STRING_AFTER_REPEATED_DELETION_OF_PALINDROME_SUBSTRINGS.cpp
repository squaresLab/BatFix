public : int minStepToDeleteString ( string str ) {
  int N = str . size ( ) ;
  vector < vector < int >> dp ( N + 1 , vector < int > ( N + 1 , 0 ) ) ;
  for ( int l = 1 ;
  l <= N ;
  l ++ ) {
    int i = 0 ;
    int j = l - 1 ;
    while ( j < N ) {
      if ( ( l == 1 ) || ( l == 2 ) ) dp [ i ] [ j ] = 1 ;
      else {
        dp [ i ] [ j ] = 1 + dp [ i + 1 ] [ j ] ;
        if ( ( str [ i ] == str [ i + 1 ] ) && ( str [ j ] == str [ i + 2 ] ) ) dp [ i ] [ j ] = min ( 1 + dp [ i + 2 ] [ j ] , dp [ i ] [ j ] ) ;
        for ( int K = i + 2 ;
        K <= j ;
        K ++ ) {
          if ( ( str [ i ] == str [ K ] ) && ( str [ K + 1 ] == str [ K + 2 ] ) ) dp [ i ] [ j ] = min ( dp [ i + 1 ] [ K - 1 ] + dp [ K + 1 ] [ j ] , dp [ i ] [ j ] ) ;
        }
      }
      i ++ ;
      j ++ ;
    }
  }
  return dp [ 0 ] [ N - 1 ] ;
}
