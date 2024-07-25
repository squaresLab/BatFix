void findSum ( string str1 , string str2 ) {
  if ( str1 . size ( ) > str2 . size ( ) ) {
    string temp = str1 ;
    str1 = str2 ;
    str2 = temp ;
  }
  string str3 = "" ;
  int n1 = str1 . size ( ) ;
  int n2 = str2 . size ( ) ;
  int diff = n2 - n1 ;
  int carry = 0 ;
  for ( int i = n1 - 1 ;
  i >= 0 ;
  i -- ) {
    int sum = ( ( ( unsigned char ) str1 [ i ] ) - ( ( unsigned char ) str2 [ i + diff ] ) ) + carry ;
    str3 = str3 + to_string ( sum % 10 ) ;
    carry = sum / 10 ;
  }
  foriinrange ( n2 - n1 - 1 , - 1 , - 1 , - 1 ) {
    int sum = ( ( ( unsigned char ) str2 [ i ] ) - ( unsigned char ) str2 [ i + diff ] ) + carry ;
    str3 = str3 + to_string ( sum % 10 ) ;
    carry = sum / 10 ;
  }
  if ( ( carry ) && ( carry != 0 ) ) str3 = str3 + to_string ( carry + '0' ) ;
  str3 . erase ( str3 . begin ( ) , str3 . end ( ) ) ;
  returnstr3