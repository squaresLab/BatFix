void query ( string s , int i , int j ) {
  int n = s . size ( ) ;
  i %= n ;
  j %= n ;
  if ( s [ i ] == s [ j ] ) {
    cout << "Yes" << endl ;
  }
  else {
    cout << "No" << endl ;
  }
}
