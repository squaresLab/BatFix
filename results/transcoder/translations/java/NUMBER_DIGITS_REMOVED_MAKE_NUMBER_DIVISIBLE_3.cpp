int divisible ( string num ) {
  int n = num . length ( ) ;
  int sum = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    sum += ( int ) ( num [ i ] ) ;
  }
  if ( sum % 3 == 0 ) return 0 ;
  if ( n == 1 ) return - 1 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) if ( sum % 3 == ( num [ i ] - '0' ) % 3 ) return 1 ;
  if ( n == 2 ) return - 1 ;
  return 2 ;
}
