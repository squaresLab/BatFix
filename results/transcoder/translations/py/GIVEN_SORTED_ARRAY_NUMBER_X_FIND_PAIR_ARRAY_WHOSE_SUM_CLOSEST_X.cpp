void printClosest ( int arr [ ] , int n , int x ) {
  int res_l = 0 , res_r = 0 ;
  int l = 0 , r = n - 1 , diff = MAX_VAL ;
  while ( r > l ) {
    if ( abs ( arr [ l ] + arr [ r ] - x ) < diff ) {
      res_l = l ;
      res_r = r ;
      diff = abs ( arr [ l ] + arr [ r ] - x ) ;
    }
    if ( arr [ l ] + arr [ r ] > x ) r -- ;
    else l ++ ;
  }
  cout << "The closest pair is {} and {}" << arr [ res_l ] << " and {}" << arr [ res_r ] << endl ;
}
