void longest ( int a [ ] , int n , int k ) {
  int freq [ 7 ] ;
  int start = 0 , end = 0 , now = 0 , l = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    freq [ a [ i ] ] ++ ;
    if ( freq [ a [ i ] ] == 1 ) now ++ ;
    while ( now > k ) {
      freq [ a [ l ] ] -- ;
      if ( freq [ a [ l ] ] == 0 ) now -- ;
      l ++ ;
    }
    if ( i - l + 1 >= end - start + 1 ) {
      end = i ;
      start = l ;
    }
  }
  for ( int i = start ;
  i <= end ;
  i ++ ) {
    cout << a [ i ] << " " ;
  }
}
