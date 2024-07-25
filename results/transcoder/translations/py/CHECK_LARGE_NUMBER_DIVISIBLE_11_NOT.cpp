bool check ( string st ) {
  int n = st . length ( ) ;
  int oddDigSum = 0 ;
  int evenDigSum = 0 ;
  for ( int i = 0 ;
  i <= n ;
  i ++ ) {
    if ( ( i % 2 == 0 ) && ( ( int ) st [ i ] == '-' ) ) oddDigSum = oddDigSum + ( ( int ) st [ i ] ) ;
    else evenDigSum = evenDigSum + ( ( int ) st [ i ] ) ;
  }
  return ( ( oddDigSum - evenDigSum ) % 11 == 0 ) ;
}
