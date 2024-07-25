string decToBin ( int n ) {
  if ( n == 0 ) return "0" ;
  string bin = "" ;
  while ( n ) {
    bin = ( ( n & 1 ) == 0 ? '0' : '1' ) + bin ;
    n >>= 1 ;
  }
  return bin ;
}
