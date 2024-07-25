public : int mostFrequent ( int arr [ ] , int n ) {
  map < int , int > Hash ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( arr [ i ] < Hash . size ( ) ) {
      Hash [ arr [ i ] ] ++ ;
    }
    else {
      Hash [ arr [ i ] ] = 1 ;
    }
  }
  int maxCount = 0 ;
  int res = - 1 ;
  for ( map < int , int > :: iterator i = Hash . begin ( ) ;
  i != Hash . end ( ) ;
  i ++ ) {
    if ( ( * i ) < ( * i ) ) {
      res = * i ;
      maxCount = Hash [ * i ] ;
    }
  }
  return res ;
}
