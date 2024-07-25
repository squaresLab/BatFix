int kthSmallest ( int * arr , int k ) {
  sort ( arr , arr + k ) ;
  return arr [ k - 1 ] ;
}
