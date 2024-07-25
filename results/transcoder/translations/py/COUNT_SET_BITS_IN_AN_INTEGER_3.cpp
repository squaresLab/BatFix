int countSetBits ( int n ) {
  if ( ( n == 0 ) || ( n == 1 ) ) return 0 ;
  else return 1 + countSetBits ( n & ( n - 1 ) ) ;
}
