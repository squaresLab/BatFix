public : int summingSeries ( int n ) {
  int S = 0 ;
  for ( int i = 1 ;
  i <= n ;
  i ++ ) S += i * i - ( i - 1 ) * ( i - 1 ) ;
  return S ;
}
