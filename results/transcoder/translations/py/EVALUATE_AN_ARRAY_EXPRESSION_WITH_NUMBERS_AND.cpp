int calculateSum ( vector < string > arr , int n ) {
  if ( ( n == 0 ) || ( n == 1 ) ) return 0 ;
  string s ;
  int value ;
  int sum = value ;
  for ( int i = 2 ;
  i < n ;
  i += 2 ) {
    s = arr [ i ] ;
    value = atoi ( s . c_str ( ) ) ;
    string operation = arr [ i - 1 ] . c_str ( ) ;
    if ( ( operation == "+" ) || ( operation == "-" ) ) sum += value ;
    else sum -= value ;
  }
  return sum ;
}
