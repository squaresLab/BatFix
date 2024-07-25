public : int areAnagram ( string str1 , string str2 ) {
  int n1 = str1 . size ( ) ;
  int n2 = str2 . size ( ) ;
  if ( n1 != n2 ) return 0 ;
  sort ( str1 . begin ( ) , str1 . end ( ) ) ;
  sort ( str2 . begin ( ) , str2 . end ( ) ) ;
  for ( int i = 0 ;
  i != n1 ;
  ++ i ) if ( str1 [ i ] != str2 [ i ] ) return 0 ;
  return 1 ;
}
