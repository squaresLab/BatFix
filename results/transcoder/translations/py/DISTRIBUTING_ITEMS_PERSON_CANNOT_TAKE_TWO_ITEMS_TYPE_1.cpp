bool checkCount ( int arr [ ] , int n , int k ) {
  map < int , int > mp ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) mp [ arr [ i ] ] ++ ;
  for ( map < int , int > :: iterator it = mp . begin ( ) ;
  it != mp . end ( ) ;
  it ++ ) if ( it -> second > 2 * k ) return false ;
  return true ;
}
