int countSetBits ( int n ) {
  if ( n == 0 ) return 0 ;
  else return 1 + countSetBits ( n & ( n - 1 ) ) ;
}
