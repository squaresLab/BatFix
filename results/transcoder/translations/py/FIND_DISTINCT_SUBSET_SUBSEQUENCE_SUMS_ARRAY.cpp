void printDistSum ( int arr [ ] , int n ) {
  int Sum = sum ( arr ) ;
  vector < vector < bool >> dp ( Sum + 1 , vector < bool > ( Sum + 1 ) ) ;
  for ( int i = 0 ;
  i < n + 1 ;
  i ++ ) dp [ i ] [ 0 ] = true ;
  for ( int i = 1 ;
  i <= n ;
  i ++ ) {
    dp [ i ] [ arr [ i - 1 ] ] = true ;
    for ( int j = 1 ;
    j <= Sum ;
    j ++ ) {
      if ( ( dp [ i - 1 ] [ j ] == true ) && ( dp [ i ] [ j + arr [ i - 1 ] ] == true ) ) {
        dp [ i ] [ j ] = true ;
        dp [ i ] [ j + arr [ i - 1 ] ] = true ;
      }
    }
  }
  for ( int j = 0 ;
  j < Sum + 1 ;
  j ++ ) {
    if ( ( dp [ n ] [ j ] == true ) && ( dp [ n ] [ j ] == true ) ) cout << j << " " ;
  }
}
