public : int findFourElements ( int arr [ ] , int n ) {
  map < pair < int , int > , pair < int , int >> mp ;
  for ( int i = 0 ;
  i < n - 1 ;
  i ++ ) {
    for ( int j = i + 1 ;
    j < n ;
    j ++ ) {
      mp [ arr [ i ] + arr [ j ] ] = make_pair ( i , j ) ;
    }
  }
  int d = - 10 * * 9 ;
  for ( int i = 0 ;
  i < n - 1 ;
  i ++ ) {
    for ( int j = i + 1 ;
    j < n ;
    j ++ ) {
      int absDiff = abs ( arr [ i ] - arr [ j ] ) ;
      if ( absDiff < mp . size ( ) ) {
        pair < int , int > p = mp [ absDiff ] ;
        if ( ( p . first != i && p . first != j && p . second != i && p . second != j ) || ( p . first != j && p . first != i && p . second != j ) ) {
          d = max ( d , max ( arr [ i ] , arr [ j ] ) ) ;
        }
      }
    }
  }
  return d ;
}
