int Resources ( int process , int need ) {
  int minResources = 0 ;
  minResources = process * ( need - 1 ) + 1 ;
  return minResources ;
}
