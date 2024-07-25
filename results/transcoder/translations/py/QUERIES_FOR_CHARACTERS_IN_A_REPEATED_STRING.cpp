void query ( string s , int i , int j ) {
  int n = s . size ( ) ;
  i %= n ;
  j %= n ;
  cout << "Yes" << s [ i ] == s [ j ] ? s [ i ] : s [ j ] ;
}
