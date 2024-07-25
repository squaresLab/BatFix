string Dragon_Curve_Sequence ( int n ) {
  string s = "1" ;
  for ( int i = 2 ;
  i <= n ;
  i ++ ) {
    string temp = "1" ;
    char prev = '1' , zero = '0' , one = '1' ;
    for ( int j = 0 ;
    j < s . length ( ) ;
    j ++ ) {
      temp += s [ j ] ;
      if ( prev == '0' ) {
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
