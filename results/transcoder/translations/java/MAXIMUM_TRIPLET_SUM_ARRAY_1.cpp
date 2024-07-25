int maxTripletSum ( int arr [ ] , int n ) {
  sort ( arr , arr + n ) ;
  return arr [ n - 1 ] + arr [ n - 2 ] + arr [ n - 3 ] ;
}
