public : int minStepToDeleteString ( string str ) {
  int N = str . length ( ) ;
  vector < vector < int >> dp ( N + 1 , vector < int > ( N + 1 , 0 ) ) ;
  for ( int i = 0 ;
  i <= N ;
  i ++ ) for ( int j = 0 ;
  j <= N ;
  j ++ ) dp [ i ] [ j ] = 0 ;
  for ( int len = 1 ;
  len <= N ;
  len ++ ) {
    for ( int i = 0 , j = len - 1 ;
    j < N ;
    i ++ , j ++ ) {
      if ( len == 1 ) dp [ i ] [ j ] = 1 ;
      else {
        dp [ i ] [ j ] = 1 + dp [ i + 1 ] [ j ] ;
        if ( str [ i ] == str [ i + 1 ] ) dp [ i ] [ j ] = min ( 1 + dp [ i + 2 ] [ j ] , dp [ i ] [ j ] ) ;
        for ( int K = i + 2 ;
        K <= j ;
        K ++ ) if ( str [ i ] == str [ K ] ) dp [ i ] [ j ] = min ( dp [ i + 1 ] [ K - 1 ] + dp [ K + 1 ] [ j ] , dp [ i ] [ j ] ) ;
      }
    }
  }
  return dp [ 0 ] [ N - 1 ] ;
}
