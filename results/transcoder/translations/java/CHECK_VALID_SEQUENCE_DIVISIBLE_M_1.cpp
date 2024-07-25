int isPossible ( int n , int index , int modulo , int M , int arr [ ] [ M ] , int dp [ ] [ M ] ) {
  modulo = ( ( modulo % M ) + M ) % M ;
  if ( index == n ) {
    if ( modulo == 0 ) return 1 ;
    return 0 ;
  }
  if ( dp [ index ] [ modulo ] != - 1 ) return dp [ index ] [ modulo ] ;
  int placeAdd = isPossible ( n , index + 1 , modulo + arr [ index ] , M , arr , dp ) ;
  int placeMinus = isPossible ( n , index + 1 , modulo - arr [ index ] , M , arr , dp ) ;
  int res = placeAdd ;
  dp [ index ] [ modulo ] = res ;
  return res ;
}
