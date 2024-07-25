int kthgroupsum ( int k ) {
  int cur = ( k * ( k - 1 ) ) + 1 ;
  int sum = 0 ;
  while ( k -- ) {
    sum += cur ;
    cur += 2 ;
  }
  return sum ;
}
