int findInteger ( int arr [ ] , int n ) {
  int neg = 0 ;
  int pos = 0 ;
  int sum = 0 ;
  for ( int i = 0 ;
  i <= n ;
  i ++ ) {
    sum += arr [ i ] ;
    if ( ( arr [ i ] < 0 ) || ( arr [ i ] > 1 ) ) neg ++ ;
    else pos ++ ;
  }
  return ( sum / abs ( neg - pos ) ) ;
}
