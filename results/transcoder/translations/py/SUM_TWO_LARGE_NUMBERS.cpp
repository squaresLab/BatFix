public : string findSum ( string str1 , string str2 ) {
  if ( ( str1 . size ( ) > str2 . size ( ) ) && ( str2 . size ( ) > str2 . size ( ) ) ) {
    string t = str1 ;
    str1 = str2 ;
    str2 = t ;
  }
  string str ;
  int n1 = str1 . size ( ) ;
  int n2 = str2 . size ( ) ;
  str1 . erase ( str1 . begin ( ) , str1 . end ( ) ) ;
  str2 . erase ( str2 . begin ( ) , str2 . end ( ) ) ;
  int carry = 0 ;
  for ( int i = 0 ;
  i < n1 ;
  i ++ ) {
    int sum = ( ( ( int ) str1 [ i ] ) - 48 ) + ( ( ( int ) str2 [ i ] ) - 48 ) + carry ;
    str += ( char ) ( sum % 10 + 48 ) ;
    carry = ( int ) ( sum / 10 ) ;
  }
  for ( int i = n1 ;
  i < n2 ;
  i ++ ) {
    int sum = ( ( ( int ) str2 [ i ] ) - 48 ) + carry ;
    str += ( char ) ( sum % 10 + 48 ) ;
    carry = ( int ) ( sum / 10 ) ;
  }
  if ( ( carry ) ) str += ( char ) ( carry + 48 ) ;
  str . erase ( str . begin ( ) , str . end ( ) ) ;
  return str ;
}
