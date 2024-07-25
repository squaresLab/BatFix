void subarrayDivisibleByK ( int arr [ ] , int n , int k ) {
  int mp [ 1000 ] ;
  int s = 0 , e = 0 , maxs = 0 , maxe = 0 ;
  mp [ arr [ 0 ] % k ] ++ ;
  for ( int i = 1 ;
  i < n ;
  i ++ ) {
    int mod = arr [ i ] % k ;
    while ( mp [ k - mod ] || ( mod == 0 && mp [ mod ] ) ) {
      mp [ arr [ s ] % k ] -- ;
      s ++ ;
    }
    mp [ mod ] ++ ;
    e ++ ;
    if ( ( e - s ) > ( maxe - maxs ) ) {
      maxe = e ;
      maxs = s ;
    }
  }
  cout << "The maximum size is " << ( maxe - maxs + 1 ) << " and the subarray is as follows\n" ;
  for ( int i = maxs ;
  i <= maxe ;
  i ++ ) {
    cout << arr [ i ] << " " ;
  }
}
