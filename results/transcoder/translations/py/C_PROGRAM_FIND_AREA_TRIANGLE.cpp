void findArea ( int a , int b , int c ) {
  if ( ( a < 0 || b < 0 || c < 0 || ( a + b <= c ) || ( a + c <= b ) || ( b + c <= a ) ) ) {
    cout << "Not a valid trianglen" << endl ;
    return ;
  }
  int s = ( a + b + c ) / 2 ;
  double area = ( s * ( s - a ) * ( s - b ) * ( s - c ) ) * * 0.5 ;
  cout << "Area of a traingle is " << area << endl ;
}
