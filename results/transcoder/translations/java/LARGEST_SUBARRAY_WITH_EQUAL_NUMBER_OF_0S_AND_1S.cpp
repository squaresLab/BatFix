int findSubArray ( int arr [ ] , int n ) {
  int sum = 0 ;
  int maxsize = - 1 , startindex = 0 ;
  int endindex = 0 ;
  for ( int i = 0 ;
  i < n - 1 ;
  i ++ ) {
    sum = ( arr [ i ] == 0 ) ? - 1 : 1 ;
    for ( int j = i + 1 ;
    j < n ;
    j ++ ) {
      if ( arr [ j ] == 0 ) sum += - 1 ;
      else sum += 1 ;
      if ( sum == 0 && maxsize < j - i + 1 ) {
        maxsize = j - i + 1 ;
        startindex = i ;
      }
    }
  }
  endindex = startindex + maxsize - 1 ;
  if ( maxsize == - 1 ) cout << "No such subarray" << endl ;
  else cout << startindex << " to " << endindex << endl ;
  return maxsize ;
}
