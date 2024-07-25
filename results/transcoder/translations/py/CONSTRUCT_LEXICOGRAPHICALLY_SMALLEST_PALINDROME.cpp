string constructPalin ( string string , int l ) {
  string . erase ( string . begin ( ) , string . end ( ) ) ;
  int i = - 1 ;
  int j = l ;
  while ( i < j ) {
    i ++ ;
    j -- ;
    if ( ( string [ i ] == string [ j ] && string [ i ] != '*' ) || ( string [ i ] == string [ j ] && string [ i ] == '*' ) ) {
      string [ i ] = 'a' ;
      string [ j ] = 'a' ;
      continue ;
    }
    else if ( ( string [ i ] == '*' ) || ( string [ i ] == '*' ) ) {
      string [ i ] = string [ j ] ;
      continue ;
    }
    else if ( string [ j ] == '*' ) {
      string [ j ] = string [ i ] ;
      continue ;
    }
    cout << "Not Possible" << endl ;
    return "" ;
  }
  return string ;
}
