void alternateSubarray ( int arr [ ] , int n ) {
  int count = 1 ;
  int prev = arr [ 0 ] ;
  for ( int i = 1 ;
  i < n ;
  i ++ ) {
    if ( ( ( arr [ i ] ^ prev ) == 0 ) && ( ( arr [ i ] ^ prev ) == 0 ) ) {
      while ( ( count ) ) {
        cout << count << " " ;
        count -- ;
      }
    }
    count ++ ;
    prev = arr [ i ] ;
  }
  while ( ( count ) ) {
    cout << count << " " ;
    count -- ;
  }
}
