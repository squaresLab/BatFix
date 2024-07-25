int maxTripletSum ( int arr [ ] , int n ) {
  int sum = - 1000000 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) for ( int j = i + 1 ;
  j < n ;
  j ++ ) for ( int k = j + 1 ;
  k < n ;
  k ++ ) if ( sum < arr [ i ] + arr [ j ] + arr [ k ] ) sum = arr [ i ] + arr [ j ] + arr [ k ] ;
  return sum ;
}
