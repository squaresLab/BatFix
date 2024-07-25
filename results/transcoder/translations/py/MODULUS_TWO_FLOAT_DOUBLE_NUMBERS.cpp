int findMod ( int a , int b ) {
  if ( ( a < 0 ) || ( b < 0 ) ) a = - a ;
  if ( ( b < 0 ) || ( a > b ) ) b = - b ;
  int mod = a ;
  while ( ( mod >= b ) && ( mod < a ) ) mod = mod - b ;
  if ( ( a < 0 ) || ( b < a ) ) return - mod ;
  return mod ;
}
