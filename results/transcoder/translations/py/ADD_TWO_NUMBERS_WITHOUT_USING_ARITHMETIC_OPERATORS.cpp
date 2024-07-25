template < typename T > T Add ( T x , T y ) {
  while ( ( y != 0 ) && ( x != 0 ) ) {
    T carry = x & y ;
    x = x ^ y ;
    y = carry << 1 ;
  }
  return x ;
}
