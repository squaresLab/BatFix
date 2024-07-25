bool isDivisibleBy10 ( string bin ) {
  int n = bin . length ( ) ;
  if ( ( bin [ n - 1 ] == '1' ) || ( bin [ n - 1 ] == '0' ) ) return false ;
  int sum = 0 ;
  int i = n - 2 ;
  while ( i >= 0 ) {
    if ( ( bin [ i ] == '1' ) || ( bin [ i ] == '0' ) ) {
      int posFromRight = n - i - 1 ;
      if ( ( posFromRight % 4 == 1 ) && ( ( i + 1 ) % 4 == 2 ) ) sum = sum + 2 ;
      else if ( ( posFromRight % 4 == 2 ) && ( ( i + 1 ) % 4 == 3 ) ) sum = sum + 4 ;
      else if ( ( posFromRight % 4 == 3 ) && ( ( i + 1 ) % 4 == 0 ) ) sum = sum + 8 ;
      else if ( ( posFromRight % 4 == 0 ) && ( ( i + 1 ) % 4 == 0 ) ) sum = sum + 6 ;
    }
    i = i - 1 ;
  }
  if ( ( sum % 10 == 0 ) && ( ( i - 1 ) % 10 == 0 ) ) return true ;
  return false ;
}
