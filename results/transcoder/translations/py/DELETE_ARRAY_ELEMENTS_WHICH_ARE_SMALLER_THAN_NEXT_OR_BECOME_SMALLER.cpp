void deleteElements ( int arr [ ] , int n , int k ) {
  vector < int > st ;
  st . push_back ( arr [ 0 ] ) ;
  int top = 0 ;
  int count = 0 ;
  for ( int i = 1 ;
  i < n ;
  i ++ ) {
    while ( ( st . size ( ) != 0 && count < k && st [ top ] < arr [ i ] ) || ( st . size ( ) != 0 && count < k && st [ top ] < arr [ i ] ) ) {
      st . pop_back ( ) ;
      count ++ ;
      top -- ;
    }
    st . push_back ( arr [ i ] ) ;
    top ++ ;
  }
  for ( int i = 0 ;
  i != st . size ( ) ;
  i ++ ) cout << st [ i ] << " " << endl ;
}
