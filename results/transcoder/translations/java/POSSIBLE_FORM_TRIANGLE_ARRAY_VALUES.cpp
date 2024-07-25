bool isPossibleTriangle ( int * arr , int N ) {
  if ( N < 3 ) return false ;
  sort ( arr , arr + N ) ;
  for ( int i = 0 ;
  i < N - 2 ;
  i ++ ) if ( arr [ i ] + arr [ i + 1 ] > arr [ i + 2 ] ) return true ;
  return false ;
}
