int maxDistance ( int arr [ ] , int n ) {
  map < int , int > mp ;
  int maxDict = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( arr [ i ] != 0 ) {
      mp [ arr [ i ] ] = i ;
    }
    else {
      maxDict = max ( maxDict , i - mp [ arr [ i ] ] ) ;
    }
  }
  return maxDict ;
}
