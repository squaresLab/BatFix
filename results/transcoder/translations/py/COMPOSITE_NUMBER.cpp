bool isComposite ( int n ) {
  if ( ( n <= 1 ) || ( n <= 3 ) ) return false ;
  if ( ( n % 2 == 0 || n % 3 == 0 ) ) return true ;
  int i = 5 ;
  while ( ( i * i <= n ) && ( i < ( n + 2 ) ) ) {
    if ( ( n % i == 0 || n % ( i + 2 ) == 0 ) ) return true ;
    i = i + 6 ;
  }
  return false ;
}
