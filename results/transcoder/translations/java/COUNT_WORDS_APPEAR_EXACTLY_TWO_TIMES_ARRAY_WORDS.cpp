int countWords ( string str [ ] , int n ) {
  unordered_map < string , int > m ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( m . count ( str [ i ] ) ) {
      int get = m [ str [ i ] ] ;
      m [ str [ i ] ] = get + 1 ;
    }
    else {
      m [ str [ i ] ] = 1 ;
    }
  }
  int res = 0 ;
  for ( auto it : m ) {
    if ( it . second == 2 ) {
      res ++ ;
    }
  }
  return res ;
}
