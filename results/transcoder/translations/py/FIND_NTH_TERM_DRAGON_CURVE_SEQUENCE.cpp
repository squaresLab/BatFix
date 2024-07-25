string Dragon_Curve_Sequence ( int n ) {
  string s = "1" ;
  for ( int i = 2 ;
  i <= n ;
  i ++ ) {
    string temp = "1" ;
    string prev = "1" ;
    string zero = "0" ;
    string one = "1" ;
    for ( int j = 0 ;
    j < s . length ( ) ;
    j ++ ) {
      temp += s [ j ] ;
      if ( ( prev == "0" ) || ( prev == "1" ) ) {
        temp += one ;
        prev = one ;
      }
      else {
        temp += zero ;
        prev = zero ;
      }
    }
    s = temp ;
  }
  return s ;
}
