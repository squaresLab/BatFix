public : int calculateSum ( string arr [ ] , int n ) {
  if ( n == 0 ) return 0 ;
  string s = arr [ 0 ] ;
  int value = atoi ( s . c_str ( ) ) ;
  int sum = value ;
  for ( int i = 2 ;
  i < n ;
  i = i + 2 ) {
    s = arr [ i ] ;
    value = atoi ( s . c_str ( ) ) ;
    char operation = arr [ i - 1 ] [ 0 ] ;
    if ( operation == '+' ) {
      sum += value ;
    }
    else {
      sum -= value ;
    }
  }
  return sum ;
}
