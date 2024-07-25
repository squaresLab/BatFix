int solve ( int dp [ ] [ 100 ] , int a [ ] , int low , int high , int turn ) {
  if ( ( low == high ) || ( low == high ) ) return a [ low ] * turn ;
  if ( ( dp [ low ] [ high ] != 0 ) && ( dp [ low ] [ high ] != 0 ) ) return dp [ low ] [ high ] ;
  dp [ low ] [ high ] = max ( a [ low ] * turn + solve ( dp , a , low + 1 , high , turn + 1 ) , a [ high ] * turn + solve ( dp , a , low , high - 1 , turn + 1 ) ) ;
  ;
  return dp [ low ] [ high ] ;
}
