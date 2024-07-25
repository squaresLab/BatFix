void longestString ( string str1 , string str2 ) {
  int count1 [ 26 ] , count2 [ 26 ] ;
  for ( int i = 0 ;
  i < str1 . length ( ) ;
  i ++ ) count1 [ str1 [ i ] - 'a' ] ++ ;
  for ( int i = 0 ;
  i < str2 . length ( ) ;
  i ++ ) count2 [ str2 [ i ] - 'a' ] ++ ;
  string result = "" ;
  for ( int i = 0 ;
  i < 26 ;
  i ++ ) {
    for ( int j = 1 ;
    j <= min ( count1 [ i ] , count2 [ i ] ) ;
    j ++ ) result += char ( 'a' + i ) ;
  }
  cout << result << endl ;
}
