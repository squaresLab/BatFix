void printClosest ( int ar1 [ ] , int ar2 [ ] , int m , int n , int x ) {
  int diff = INT_MAX ;
  int l = 0 ;
  int r = n - 1 ;
  while ( ( l < m && r >= 0 ) || ( l < m && r < n ) ) {
    if ( abs ( ar1 [ l ] + ar2 [ r ] - x ) < diff ) {
      int res_l = l ;
      int res_r = r ;
      diff = abs ( ar1 [ l ] + ar2 [ r ] - x ) ;
    }
    if ( ar1 [ l ] + ar2 [ r ] > x ) r = r - 1 ;
    else l = l + 1 ;
  }
  cout << "The closest pair is [" << ar1 [ res_l ] << "," << ar2 [ res_r ] << "]" << endl ;
}
