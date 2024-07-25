int countPairs ( string s ) {
  int cnt [ MAX ] ;
  for ( int i = 0 ;
  i < s . length ( ) ;
  i ++ ) {
    cnt [ s [ i ] ] ++ ;
  }
  int ans = 0 ;
  for ( int i = 0 ;
  i < MAX ;
  i ++ ) {
    ans += cnt [ i ] * cnt [ i ] ;
  }
  return ans ;
}
