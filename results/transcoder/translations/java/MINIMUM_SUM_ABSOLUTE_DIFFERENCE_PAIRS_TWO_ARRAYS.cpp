long long findMinSum ( long long a [ ] , long long b [ ] , long long n ) {
  qsort ( a , n , sizeof ( long long ) , compareLong ) ;
  qsort ( b , n , sizeof ( long long ) , compareLong ) ;
  long long sum = 0 ;
  for ( long long i = 0 ;
  i < n ;
  i ++ ) {
    sum = sum + qAbs ( a [ i ] - b [ i ] ) ;
  }
  return sum ;
}
