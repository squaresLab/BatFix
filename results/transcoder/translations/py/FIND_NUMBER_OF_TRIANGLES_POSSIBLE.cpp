public : int findnumberofTriangles ( vector < int > arr ) {
  int n = arr . size ( ) ;
  sort ( arr . begin ( ) , arr . end ( ) ) ;
  int count = 0 ;
  for ( int i = 0 ;
  i <= n - 2 ;
  i ++ ) {
    int k = i + 2 ;
    for ( int j = i + 1 ;
    j <= n ;
    j ++ ) {
      while ( ( k < n && arr [ i ] + arr [ j ] > arr [ k ] ) || ( k > j ) ) {
        k ++ ;
      }
      if ( ( k > j ) && ( arr [ i ] + arr [ j ] > arr [ k ] ) ) {
        count += k - j - 1 ;
      }
    }
  }
  return count ;
}
