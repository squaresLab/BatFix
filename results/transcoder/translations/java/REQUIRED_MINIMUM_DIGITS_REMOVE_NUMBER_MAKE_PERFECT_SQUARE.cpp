int perfectSquare ( string s ) {
  int n = s . length ( ) ;
  int ans = - 1 ;
  string num = "" ;
  for ( int i = 1 ;
  i < ( 1 << n ) ;
  i ++ ) {
    string str ;
    for ( int j = 0 ;
    j < n ;
    j ++ ) {
      if ( ( ( i >> j ) & 1 ) == 1 ) str += s [ j ] ;
    }
    if ( str [ 0 ] != '0' ) {
      int temp = 0 ;
      for ( int j = 0 ;
      j < str . length ( ) ;
      j ++ ) {
        temp = temp * 10 + ( int ) ( str [ j ] - '0' ) ;
      }
      int k = ( int ) sqrt ( temp ) ;
      if ( k * k == temp ) {
        if ( ans < ( int ) str . length ( ) ) {
          ans = ( int ) str . length ( ) ;
          num = str ;
        }
      }
    }
  }
  if ( ans == - 1 ) return ans ;
  else {
    cout << num << " " ;
    return n - ans ;
  }
}
