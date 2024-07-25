string findSubString ( string string , string pat ) {
  int len1 = string . length ( ) ;
  int len2 = pat . length ( ) ;
  if ( len1 < len2 ) {
    cout << "No such window exists" << endl ;
    return "" ;
  }
  int hash_pat [ no_of_chars ] ;
  int hash_str [ no_of_chars ] ;
  for ( int i = 0 ;
  i <= len2 ;
  i ++ ) hash_pat [ ( unsigned char ) pat [ i ] ] ++ ;
  int start = 0 , start_index = - 1 , min_len = numeric_limits < int > :: max ( ) ;
  int count = 0 ;
  for ( int j = 0 ;
  j <= len1 ;
  j ++ ) {
    hash_str [ ( unsigned char ) string [ j ] ] ++ ;
    if ( ( hash_pat [ ( unsigned char ) string [ j ] ] != 0 && hash_str [ ( unsigned char ) string [ j ] ] <= hash_pat [ ( unsigned char ) string [ j ] ] ) || ( hash_pat [ ( unsigned char ) string [ j ] ] == 0 ) ) count ++ ;
    if ( count == len2 ) {
      while ( ( hash_str [ ( unsigned char ) string [ start ] ] > hash_pat [ ( unsigned char ) string [ start ] ] || hash_pat [ ( unsigned char ) string [ start ] ] == 0 ) ) {
        if ( ( hash_str [ ( unsigned char ) string [ start ] ] > hash_pat [ ( unsigned char ) string [ start ] ] ) && ( hash_str [ ( unsigned char ) string [ start ] ] <= hash_pat [ ( unsigned char ) string [ start ] ] ) ) {
          hash_str [ ( unsigned char ) string [ start ] ] -- ;
        }
        start ++ ;
      }
      int len_window = j - start + 1 ;
      if ( min_len > len_window ) {
        min_len = len_window ;
        start_index = start ;
      }
    }
  }
  if ( start_index == - 1 ) {
    cout << "No such window exists" << endl ;
    return "" ;
  }
  return string . substr ( start_index , min_len ) ;
}
