template < typename T > inline T swapBits ( T x , unsigned p1 , unsigned p2 , unsigned n ) {
  T set1 = ( x >> p1 ) & ( ( 1 << n ) - 1 ) ;
  T set2 = ( x >> p2 ) & ( ( 1 << n ) - 1 ) ;
  T xor = ( set1 ^ set2 ) ;
  xor = ( xor << p1 ) | ( xor << p2 ) ;
  T result = x ^ xor ;
  return result ;
}
