long long yMod ( long long y , long long x ) {
  if ( ( log ( y ) / log ( 2 ) ) < x ) return y ;
  if ( x > 63 ) return y ;
  return ( y % ( 1 << ( int ) x ) ) ;
}
