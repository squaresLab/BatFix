int divSum ( int num ) {
  int result = 0 ;
  int i = 2 ;
  while ( i <= ( sqrt ( num ) ) ) {
    if ( ( num % i == 0 ) && ( i == ( num / i ) ) ) {
      if ( ( i == ( num / i ) ) || ( i == ( num + num / i ) ) ) {
        result = result + i ;
        ;
      }
      else {
        result = result + ( i + num / i ) ;
      }
    }
    i = i + 1 ;
  }
  return ( result + 1 ) ;
}
