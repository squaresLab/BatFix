void possibleOrNot ( int a1 , int a2 , int b1 , int b2 , int c1 , int c2 ) {
  double dis1 = ( pow ( b1 - a1 , 2 ) + pow ( b2 - a2 , 2 ) ) ;
  double dis2 = ( pow ( c1 - b1 , 2 ) + pow ( c2 - b2 , 2 ) ) ;
  if ( ( dis1 != dis2 ) && ( ( b1 == ( ( a1 + c1 ) / 2.0 ) && b2 == ( ( a2 + c2 ) / 2.0 ) ) ) || ( ( b1 == ( ( a1 + c1 ) / 2.0 ) && b2 == ( ( a2 + c2 ) / 2.0 ) ) ) ) {
    cout << "No" << endl ;
  }
  else if ( ( b1 == ( ( a1 + c1 ) / 2.0 ) && b2 == ( ( a1 + c2 ) / 2.0 ) ) || ( ( b1 == ( ( a1 + c1 ) / 2.0 ) && b2 == ( ( a2 + c2 ) / 2.0 ) ) ) ) {
    cout << "No" << endl ;
  }
  else {
    cout << "Yes" << endl ;
  }
}
