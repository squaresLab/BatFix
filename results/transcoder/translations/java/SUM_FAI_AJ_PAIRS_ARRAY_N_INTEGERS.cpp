public : int sum ( int a [ ] , int n ) {
  map < int , int > cnt ;
  int ans = 0 , pre_sum = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    ans += ( i * a [ i ] ) - pre_sum ;
    pre_sum += a [ i ] ;
    if ( cnt . count ( a [ i ] - 1 ) ) {
      ans -= cnt [ a [ i ] - 1 ] ;
    }
    if ( cnt . count ( a [ i ] + 1 ) ) {
      ans += cnt [ a [ i ] + 1 ] ;
    }
    if ( cnt . count ( a [ i ] ) ) {
      cnt [ a [ i ] ] = cnt [ a [ i ] ] + 1 ;
    }
    else {
      cnt [ a [ i ] ] = 1 ;
    }
  }
  return ans ;
}
