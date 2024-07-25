int findPosition ( int k , int n ) {
  long long f1 = 0 , f2 = 1 , f3 ;
  int i = 2 ;
  while ( i != 0 ) {
    f3 = f1 + f2 ;
    f1 = f2 ;
    f2 = f3 ;
    if ( f2 % k == 0 ) return n * i ;
    i ++ ;
  }
  return 0 ;
}
