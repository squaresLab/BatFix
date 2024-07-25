string compute ( string str , int n ) {
  string reverseAlphabet = "zyxwvutsrqponmlkjihgfedcba" ;
  int l = str . length ( ) ;
  string answer = "" ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    answer = answer + str [ i ] ;
  }
  for ( int i = n ;
  i < l ;
  i ++ ) {
    answer = answer + reverseAlphabet [ str [ i ] - 'a' ] ;
  }
  return answer ;
}
