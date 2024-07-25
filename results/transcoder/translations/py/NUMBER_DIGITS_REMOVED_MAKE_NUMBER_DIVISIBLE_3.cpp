int divisible ( string num ) {
  int n = num . length ( ) ;
  ;
  int sum = 0 ;
  ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) sum += ( int ) num [ i ] ;
  ;
  if ( ( sum % 3 == 0 ) && ( sum % 4 == 0 ) ) return 0 ;
  ;
  if ( ( n == 1 ) && ( sum % 3 == ( int ) num [ 0 ] % 3 ) ) return 1 ;
  ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) if ( ( sum % 3 == ( int ) num [ i ] % 3 ) ) return 1 ;
  ;
  if ( ( n == 2 ) && ( sum % 3 == ( int ) num [ 1 ] % 3 ) ) return - 1 ;
  ;
  return 2 ;
}
