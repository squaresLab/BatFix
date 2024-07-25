int maxTasks ( int high [ ] , int low [ ] , int n ) {
  if ( n <= 0 ) return 0 ;
  return max ( high [ n - 1 ] + maxTasks ( high , low , ( n - 2 ) ) , low [ n - 1 ] + maxTasks ( high , low , ( n - 1 ) ) ) ;
}
