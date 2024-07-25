void subarrayDivisibleByK ( int arr [ ] , int n , int k ) {
  int mp [ 1000 ] ;
  int s = 0 ;
  ;
  int e = 0 ;
  int maxs = 0 ;
  int maxe = 0 ;
  mp [ arr [ 0 ] % k ] = mp [ arr [ 0 ] % k ] + 1 ;
  for ( int i = 1 ;
  i < n ;
  i ++ ) {
    int mod = arr [ i ] % k ;
    while ( ( mp [ k - mod ] != 0 || ( mod == 0 && mp [ mod ] != 0 ) ) ) {
      mp [ arr [ s ] % k ] = mp [ arr [ s ] % k ] - 1 ;
      s = s + 1 ;
    }
    mp [ mod ] = mp [ mod ] + 1 ;
    e = e + 1 ;
    if ( ( ( e - s ) > ( maxe - maxs ) ) && ( ( maxe - maxs ) < ( maxe - s ) ) ) {
      maxe = e ;
      maxs = s ;
    }
  }
  cout << "The maximum size is {} and the " << ( maxe - maxs + 1 ) << endl ;
  for ( int i = maxs ;
  i <= maxe ;
  i ++ ) {
    cout << "{} " << arr [ i ] << " " ;
  }
}
