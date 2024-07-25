void checkPoint ( int radius , int x , int y , float percent , float startAngle ) {
  float endAngle = 360 / percent + startAngle ;
  double polarradius = sqrt ( x * x + y * y ) ;
  double Angle = atan ( y / x ) ;
  if ( Angle >= startAngle && Angle <= endAngle && polarradius < radius ) {
    cout << "Point" << "(" << x << "," << y << ")" << " exist in the circle sector\n" ;
  }
  else {
    cout << "Point" << "(" << x << "," << y << ")" << " exist in the circle sector\n" ;
  }
}
