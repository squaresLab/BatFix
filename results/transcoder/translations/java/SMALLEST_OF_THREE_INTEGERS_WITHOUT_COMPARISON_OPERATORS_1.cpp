int smallest ( int x , int y , int z ) {
  if ( ( y / x ) != 1 ) return ( ( y / z ) != 1 ) ? y : z ;
  return ( ( x / z ) != 1 ) ? x : z ;
}
