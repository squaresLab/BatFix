string findSum ( string str1 , string str2 ) {
  if ( str1 . length ( ) > str2 . length ( ) ) {
    string t = str1 ;
    str1 = str2 ;
    str2 = t ;
  }
  string str = "" ;
  int n1 = str1 . length ( ) , n2 = str2 . length ( ) ;
  int diff = n2 - n1 ;
  int carry = 0 ;
  for ( int i = n1 - 1 ;
  i >= 0 ;
  i -- ) {
    int sum = ( ( int ) ( str1 [ i ] - '0' ) + ( int ) ( str2 [ i + diff ] - '0' ) + carry ) ;
    str += char ( sum % 10 + '0' ) ;
    carry = sum / 10 ;
  }
  for ( int i = n2 - n1 - 1 ;
  i >= 0 ;
  i -- ) {
    int sum = ( ( int ) ( str2 [ i ] - '0' ) + carry ) ;
    str += char ( sum % 10 + '0' ) ;
    carry = sum / 10 ;
  }
  if ( carry ) str += char ( carry + '0' ) ;
  return string ( str ) . reverse ( ) . str ( ) ;
}
