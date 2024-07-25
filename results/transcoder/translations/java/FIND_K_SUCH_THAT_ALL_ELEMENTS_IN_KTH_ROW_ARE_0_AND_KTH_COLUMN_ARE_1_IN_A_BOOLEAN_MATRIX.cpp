int find ( bool arr [ ] [ n ] ) {
  int i = 0 , j = n - 1 ;
  int res = - 1 ;
  while ( i < n && j >= 0 ) {
    if ( arr [ i ] [ j ] == false ) {
      while ( j >= 0 && ( arr [ i ] [ j ] == false || i == j ) ) j -- ;
      if ( j == - 1 ) {
        res = i ;
        break ;
      }
      else i ++ ;
    }
    else {
      while ( i < n && ( arr [ i ] [ j ] == true || i == j ) ) i ++ ;
      if ( i == n ) {
        res = j ;
        break ;
      }
      else j -- ;
    }
  }
  if ( res == - 1 ) return res ;
  for ( int k = 0 ;
  k < n ;
  k ++ ) {
    if ( res != k && arr [ k ] [ res ] != true ) return - 1 ;
  }
  for ( int l = 0 ;
  l < n ;
  l ++ ) {
    if ( res != l && arr [ res ] [ l ] != false ) return - 1 ;
  }
  return res ;
}
