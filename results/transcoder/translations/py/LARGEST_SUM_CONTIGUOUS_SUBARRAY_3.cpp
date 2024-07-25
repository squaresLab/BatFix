void maxSubArraySum ( int a [ ] , int size ) {
  int max_so_far = - maxsize - 1 ;
  int max_ending_here = 0 ;
  int start = 0 ;
  int end = 0 ;
  int s = 0 ;
  for ( int i = 0 ;
  i != size ;
  i ++ ) {
    max_ending_here += a [ i ] ;
    if ( max_so_far < max_ending_here ) {
      max_so_far = max_ending_here ;
      start = s ;
      end = i ;
    }
    if ( max_ending_here < 0 ) {
      max_ending_here = 0 ;
      s = i + 1 ;
    }
  }
  cout << "Maximum contiguous sum is " << max_so_far << endl ;
  cout << "Starting Index " << start << endl ;
  cout << "Ending Index " << end << endl ;
}
