void CountTriangles ( vector < int > & A ) {
  int n = A . size ( ) ;
  ;
  sort ( A . begin ( ) , A . end ( ) ) ;
  int count = 0 ;
  for ( int i = n - 1 ;
  i > 0 ;
  i -- ) {
    int l = 0 ;
    int r = i - 1 ;
    while ( ( l < r ) && ( l < r ) ) {
      if ( ( A [ l ] + A [ r ] > A [ i ] ) && ( A [ l ] + A [ r ] > A [ i ] ) ) {
        count += r - l ;
        r -- ;
      }
      else {
        l ++ ;
      }
    }
  }
  cout << "No of possible solutions: " << count << endl ;
}
