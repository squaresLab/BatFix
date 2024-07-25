bool isPossible ( int n , int index , int Sum , int M , int * arr [ ] [ MAX ] , int dp [ ] [ MAX ] ) {
  static int MAX = - 1 ;
  if ( index == n ) {
    if ( ( Sum % M ) == 0 ) return true ;
    return false ;
  }
  if ( dp [ index ] [ Sum ] != - 1 ) return dp [ index ] [ Sum ] ;
  bool placeAdd = isPossible ( n , index + 1 , Sum + arr [ index ] , M , arr , dp ) ;
  bool placeMinus = isPossible ( n , index + 1 , Sum - arr [ index ] , M , arr , dp ) ;
  bool res = placeAdd || placeMinus ;
  dp [ index ] [ Sum ] = res ;
  return res ;
}
