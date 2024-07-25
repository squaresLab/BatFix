void findMissing ( int a [ ] , int b [ ] , int n , int m ) {
  map < int , int > s ;
  for ( int i = 0 ;
  i < m ;
  i ++ ) s [ b [ i ] ] = 1 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) if ( a [ i ] != s . begin ( ) -> second ) cout << a [ i ] << " " ;
}
