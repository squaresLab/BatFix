int kthdigit ( int a , int b , int k ) {
  int p = a * * b ;
  int count = 0 ;
  while ( ( p > 0 ) && ( count < k ) ) {
    int rem = p % 10 ;
    count = count + 1 ;
    if ( ( count == k ) && ( p > 0 ) ) return rem ;
    p = p / 10 ;
    ;
  }
  return 0 ;
}
