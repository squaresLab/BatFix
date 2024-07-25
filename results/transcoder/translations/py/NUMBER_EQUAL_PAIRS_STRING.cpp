public : int countPairs ( string s ) {
  int cnt [ MAX ] ;
  for ( int i = 0 ;
  i <= MAX ;
  i ++ ) cnt [ ( unsigned char ) s [ i ] - 97 ] ++ ;
  int ans = 0 ;
  for ( int i = 0 ;
  i <= MAX ;
  i ++ ) ans += cnt [ i ] * cnt [ i ] ;
  return ans ;
}
