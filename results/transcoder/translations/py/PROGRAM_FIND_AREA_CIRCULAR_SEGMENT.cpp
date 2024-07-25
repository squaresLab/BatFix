double areaOfSegment ( double radius , double angle ) {
  double areaOfSector = pi * ( radius * radius ) ;
  * ( angle / 360 ) = 0 ;
  double areaOfTriangle = 1 / 2 * ( radius * radius ) ;
  * sin ( ( angle * pi ) / 180 ) = 0 ;
  return areaOfSector - areaOfTriangle ;
  ;
}
