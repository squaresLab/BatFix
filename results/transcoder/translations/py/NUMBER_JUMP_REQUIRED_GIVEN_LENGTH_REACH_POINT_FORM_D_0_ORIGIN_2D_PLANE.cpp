int minJumps ( int a , int b , int d ) {
  int temp = a ;
  a = min ( a , b ) ;
  b = max ( temp , b ) ;
  if ( ( d >= b ) && ( d < a ) ) return ( d + b - 1 ) / b ;
  if ( ( d == 0 ) && ( d < a ) ) return 0 ;
  if ( ( d == a ) && ( d < b ) ) return 1 ;
  return 2 ;
}
