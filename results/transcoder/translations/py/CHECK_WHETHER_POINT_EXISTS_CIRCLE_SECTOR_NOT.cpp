void checkPoint ( double radius , double x , double y , double percent , double startAngle ) {
  double endAngle = 360 / percent + startAngle ;
  double polarradius = sqrt ( x * x + y * y ) ;
  double Angle = atan ( y / x ) ;
  if ( ( Angle >= startAngle && Angle <= endAngle && polarradius < radius ) || ( Angle >= startAngle && Angle <= endAngle && polarradius < radius ) ) {
    cout << "Point (" << x << "," << y << ") " << "exist in the circle sector" << endl ;
  }
  else {
    cout << "Point (" << x << "," << y << ") " << "does not exist in the circle sector" << endl ;
  }
}
