Boolean subArrayExists ( int arr [ ] ) {
  HashMap < int , int > hM ;
  int sum = 0 ;
  for ( int i = 0 ;
  i < arr . size ( ) ;
  i ++ ) {
    sum += arr [ i ] ;
    if ( arr [ i ] == 0 || sum == 0 || hM . get ( sum ) != 0 ) return true ;
    hM . put ( sum , i ) ;
  }
  return false ;
}
