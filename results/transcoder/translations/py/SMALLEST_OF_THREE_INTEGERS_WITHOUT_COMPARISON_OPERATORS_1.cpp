int smallest ( int x , int y , int z ) {
  if ( ( ! ( y / x ) ) && ( ! ( y / z ) ) ) return y ? ( y / z ) : z ;
  return x ? ( x / z ) : z ;
}
