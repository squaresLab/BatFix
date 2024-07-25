public : int maxDiff ( int arr [ ] , int n ) {
  int result = 0 ;
  sort ( arr , arr + n ) ;
  for ( int i = 0 ;
  i < n - 1 ;
  i ++ ) {
    if ( ( abs ( arr [ i ] ) != abs ( arr [ i + 1 ] ) ) && ( abs ( arr [ i ] ) != abs ( arr [ i + 1 ] ) ) ) {
      result += abs ( arr [ i ] ) ;
    }
    else {
    }
  }
  if ( ( arr [ n - 2 ] != arr [ n - 1 ] ) && ( arr [ n - 1 ] != arr [ n - 2 ] ) ) {
    result += abs ( arr [ n - 1 ] ) ;
  }
  return result ;
}
