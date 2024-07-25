int maxvolume ( int s ) {
  int length = ( int ) ( s / 3 ) ;
  s -= length ;
  int breadth = s / 2 ;
  int height = s - breadth ;
  return ( int ) ( length * breadth * height ) ;
}
