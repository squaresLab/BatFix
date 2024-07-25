int maxTripletSum ( int arr [ ] , int n ) {
  int maxA = - 100000000 , maxB = - 100000000 ;
  int maxC = - 100000000 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( arr [ i ] > maxA ) {
      maxC = maxB ;
      maxB = maxA ;
      maxA = arr [ i ] ;
    }
    else if ( arr [ i ] > maxB ) {
      maxC = maxB ;
      maxB = arr [ i ] ;
    }
    else if ( arr [ i ] > maxC ) {
      maxC = arr [ i ] ;
    }
  }
  return ( maxA + maxB + maxC ) ;
}
