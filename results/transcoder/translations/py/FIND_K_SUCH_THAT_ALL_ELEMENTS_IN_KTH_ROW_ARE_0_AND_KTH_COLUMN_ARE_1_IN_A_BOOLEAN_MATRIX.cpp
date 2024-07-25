public : int find ( vector < vector < int >> & arr ) {
  int n = arr . size ( ) ;
  int i = 0 ;
  int j = n - 1 ;
  int res = - 1 ;
  while ( i < n && j >= 0 ) {
    if ( arr [ i ] [ j ] == 0 ) {
      while ( j >= 0 && ( arr [ i ] [ j ] == 0 || i == j ) ) j -- ;
      if ( j == - 1 ) {
        res = i ;
        break ;
      }
      else i ++ ;
    }
    else {
      while ( i < n && ( arr [ i ] [ j ] == 1 || i == j ) ) i ++ ;
      if ( i == n ) {
        res = j ;
        break ;
      }
      else j -- ;
    }
  }
  if ( res == - 1 ) return res ;
  for ( i = 0 ;
  i <= n ;
  i ++ ) if ( res != i && arr [ i ] [ res ] != 1 ) return - 1 ;
  ;
  for ( j = 0 ;
  j <= n ;
  j ++ ) if ( res != j && arr [ res ] [ j ] != 0 ) return - 1 ;
  ;
  return res ;
}
