bool checkcircle ( int r , int R , int r1 , int x1 , int y1 ) {
  int dis = ( int ) sqrt ( x1 * x1 + y1 * y1 ) ;
  return ( dis - r1 >= R && dis + r1 <= r ) ;
}
