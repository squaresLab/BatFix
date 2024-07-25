void countDistinct ( int arr [ ] , int k ) {
  unordered_map < int , int > hM ;
  int dist_count = 0 ;
  for ( int i = 0 ;
  i < k ;
  i ++ ) {
    if ( hM . find ( arr [ i ] ) == hM . end ( ) ) {
      hM [ arr [ i ] ] = 1 ;
      dist_count ++ ;
    }
    else {
      int count = hM . find ( arr [ i ] ) -> second ;
      hM [ arr [ i ] ] = count + 1 ;
    }
  }
  cout << dist_count << endl ;
  for ( int i = k ;
  i < arr . size ( ) ;
  i ++ ) {
    if ( hM . find ( arr [ i - k ] ) == hM . end ( ) ) {
      hM . erase ( arr [ i - k ] ) ;
      dist_count -- ;
    }
    else {
      int count = hM . find ( arr [ i - k ] ) -> second ;
      hM [ arr [ i - k ] ] = count - 1 ;
    }
    if ( hM . find ( arr [ i ] ) == hM . end ( ) ) {
      hM . insert ( arr [ i ] , 1 ) ;
      dist_count ++ ;
    }
    else {
      int count = hM . find ( arr [ i ] ) -> second ;
      hM [ arr [ i ] ] = count + 1 ;
    }
    cout << dist_count << endl ;
  }
}
