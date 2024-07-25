int findSubArray ( int arr [ ] , int n ) {
  int sum = 0 ;
  int maxsize = - 1 ;
  for ( int i = 0 ;
  i <= n - 1 ;
  i ++ ) {
    sum = - 1 == ( arr [ i ] ) ? 1 : 0 ;
    for ( int j = i + 1 ;
    j < n ;
    j ++ ) {
      sum = sum + ( - 1 == ( arr [ j ] ) ) ? 1 : 0 ;
      if ( ( sum == 0 && maxsize < j - i + 1 ) || ( sum == 0 && maxsize < j + i + 1 ) ) {
        maxsize = j - i + 1 ;
        startindex = i ;
      }
    }
  }
  if ( ( maxsize == - 1 ) || ( startindex == 0 ) ) {
    cout << "No such subarray" << endl ;
  }
  else {
    cout << startindex << "to" << startindex + maxsize - 1 << endl ;
  }
  return maxsize ;
}
