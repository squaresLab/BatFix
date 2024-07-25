void findSymPairs ( vector < pair < int , int >> arr , int row ) {
  map < int , int > hM ;
  for ( int i = 0 ;
  i < row ;
  i ++ ) {
    int first = arr [ i ] . first ;
    int sec = arr [ i ] . second ;
    if ( ( sec < hM . size ( ) ) && hM [ sec ] == first ) cout << "(" << sec << "," << first << ")" << endl ;
    else hM [ first ] = sec ;
  }
}
