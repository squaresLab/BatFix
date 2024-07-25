int findCommon ( vector < vector < int >> & mat ) {
  static int M = 100 ;
  static int N = 100 ;
  map < int , int > cnt ;
  cnt . clear ( ) ;
  int i = 0 ;
  int j = 0 ;
  while ( ( i < M ) && ( j < N ) ) {
    cnt [ mat [ i ] [ 0 ] ] = cnt [ mat [ i ] [ 0 ] ] + 1 ;
    j = 1 ;
    while ( ( j < N ) && ( i < M ) && ( j < N ) ) {
      if ( ( mat [ i ] [ j ] != mat [ i ] [ j - 1 ] ) && ( mat [ i ] [ j ] != mat [ i ] [ j - 1 ] ) ) cnt [ mat [ i ] [ j ] ] = cnt [ mat [ i ] [ j ] ] + 1 ;
      j = j + 1 ;
    }
    i = i + 1 ;
  }
  for ( int ele : cnt ) if ( ( cnt [ ele ] == M ) && ( cnt [ ele ] == N ) ) return ele ;
  return - 1 ;
}
