int most_frequent ( int arr [ ] , int n ) {
  map < int , int > hp ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    int key = arr [ i ] ;
    if ( hp . count ( key ) ) {
      int freq = hp [ key ] ;
      freq ++ ;
      hp [ key ] = freq ;
    }
    else hp [ key ] = 1 ;
  }
  int max_count = 0 , res = - 1 ;
  for ( map < int , int > :: iterator val = hp . begin ( ) ;
  val != hp . end ( ) ;
  val ++ ) {
    if ( max_count < val -> second ) {
      res = val -> first ;
      max_count = val -> second ;
    }
  }
  return res ;
}
