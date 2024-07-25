int kthdigit ( int a , int b , int k ) {
  int p = ( int ) pow ( a , b ) ;
  int count = 0 ;
  while ( p > 0 && count < k ) {
    int rem = p % 10 ;
    count ++ ;
    if ( count == k ) return rem ;
    p = p / 10 ;
  }
  return 0 ;
}
