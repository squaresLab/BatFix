int summing_series ( long long n ) {
  int S = 0 ;
  for ( long long i = 1 ;
  i <= n ;
  i ++ ) {
    S += i * i - ( i - 1 ) * ( i - 1 ) ;
  }
  return S ;
}
