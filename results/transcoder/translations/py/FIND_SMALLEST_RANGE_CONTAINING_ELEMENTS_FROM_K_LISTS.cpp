void findSmallestRange ( int arr [ ] [ 10 ] , int n , int k ) {
  int i , minval , maxval , minrange , minel , maxel , flag , minind ;
  for ( i = 0 ;
  i < k + 1 ;
  i ++ ) ptr [ i ] = 0 ;
  minrange = 10 * 9 ;
  while ( ( 1 ) ) {
    minind = - 1 ;
    minval = 10 * 9 ;
    maxval = - 10 * 9 ;
    flag = 0 ;
    for ( i = 0 ;
    i < k ;
    i ++ ) {
      if ( ( ptr [ i ] == n ) && ( arr [ i ] [ ptr [ i ] ] < minval ) ) {
        flag = 1 ;
        break ;
      }
      if ( ( ptr [ i ] < n ) && ( arr [ i ] [ ptr [ i ] ] > maxval ) ) {
        maxval = arr [ i ] [ ptr [ i ] ] ;
      }
    }
    if ( ( flag ) && ( ( maxval - minval ) < minrange ) ) {
      minel = minval ;
      maxel = maxval ;
      minrange = maxel - minel ;
    }
  }
  cout << "The smallest range is [" << minel << "," << maxel << "]" << endl ;
}
