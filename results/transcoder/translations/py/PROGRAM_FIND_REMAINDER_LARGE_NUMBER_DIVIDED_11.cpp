int remainder ( string st ) {
  int ln = st . length ( ) ;
  int rem = 0 ;
  for ( int i = 0 ;
  i != ln ;
  ++ i ) {
    int num = rem * 10 + ( int ) ( st [ i ] ) ;
    rem = num % 11 ;
  }
  return rem ;
}
