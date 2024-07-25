public : int lps ( string str ) {
  int n = str . size ( ) ;
  vector < vector < int >> L ( n , vector < int > ( n ) ) ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) L [ i ] [ i ] = 1 ;
  for ( int cl = 2 ;
  cl <= n ;
  cl ++ ) for ( int i = 0 ;
  i < n - cl + 1 ;
  i ++ ) {
    int j = i + cl - 1 ;
    if ( str [ i ] == str [ j ] && cl == 2 ) L [ i ] [ j ] = 2 ;
    else if ( str [ i ] == str [ j ] ) L [ i ] [ j ] = L [ i + 1 ] [ j - 1 ] + 2 ;
    else L [ i ] [ j ] = max ( L [ i ] [ j - 1 ] , L [ i + 1 ] [ j ] ) ;
    ;
  }
  return L [ 0 ] [ n - 1 ] ;
}
