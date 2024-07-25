bool areAnagram ( char * str1 , char * str2 ) {
  int n1 = strlen ( str1 ) ;
  int n2 = strlen ( str2 ) ;
  if ( n1 != n2 ) return false ;
  sort ( str1 , str2 + n1 ) ;
  sort ( str1 + n1 , str2 + n2 ) ;
  for ( int i = 0 ;
  i < n1 ;
  i ++ ) if ( str1 [ i ] != str2 [ i ] ) return false ;
  return true ;
}
