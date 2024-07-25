int maxvolume ( int s ) {
  int length = s / 3 ;
  s -= length ;
  int breadth = s / 2 ;
  int height = s - breadth ;
  return length * breadth * height ;
}
