string compute ( string st , int n ) {
  string reverseAlphabet = "zyxwvutsrqponmlkjihgfedcba" ;
  int l = st . length ( ) ;
  string answer = "" ;
  for ( int i = 0 ;
  i <= n ;
  i ++ ) {
    answer = answer + st [ i ] ;
  }
  ;
  for ( int i = n ;
  i < l ;
  i ++ ) {
    answer = ( answer + reverseAlphabet [ ( char ) st [ i ] - 'a' ] ) ;
  }
  ;
  return answer ;
}
