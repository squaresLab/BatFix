void countDistinct ( int arr [ ] , int k , int n ) {
  map < int , int > mp ;
  int dist_count = 0 ;
  for ( int i = 0 ;
  i < k ;
  i ++ ) {
    if ( mp [ arr [ i ] ] == 0 ) dist_count ++ ;
    mp [ arr [ i ] ] ++ ;
  }
  cout << dist_count << endl ;
  for ( int i = k ;
  i < n ;
  i ++ ) {
    if ( mp [ arr [ i - k ] ] == 1 ) dist_count -- ;
    mp [ arr [ i - k ] ] -- ;
    if ( mp [ arr [ i ] ] == 0 ) dist_count ++ ;
    mp [ arr [ i ] ] ++ ;
    cout << dist_count << endl ;
  }
}
