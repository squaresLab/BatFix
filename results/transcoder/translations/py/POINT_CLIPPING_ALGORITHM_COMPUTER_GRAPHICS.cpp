void pointClip ( Point XY [ ] , int n , int Xmin , int Ymin , int Xmax , int Ymax ) {
  cout << "Point inside the viewing pane:" << endl ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( ( ( XY [ i ] . x >= Xmin ) && ( XY [ i ] . x <= Xmax ) ) || ( ( XY [ i ] . y >= Ymin ) && ( XY [ i ] . y <= Ymax ) ) ) {
      if ( ( ( XY [ i ] . y >= Ymin ) && ( XY [ i ] . y <= Ymax ) ) || ( ( XY [ i ] . x >= Xmin ) && ( XY [ i ] . x <= Xmax ) ) || ( ( XY [ i ] . y >= Xmin ) && ( XY [ i ] . y <= Xmax ) ) ) {
        cout << "[" << XY [ i ] . x << ", " << XY [ i ] . y << "]" << endl ;
      }
    }
  }
  cout << "\n\nPoint outside the viewing pane:" << endl ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( ( ( XY [ i ] . x < Xmin ) || ( XY [ i ] . x > Xmax ) ) || ( ( XY [ i ] . y < Ymin ) || ( XY [ i ] . y > Ymax ) ) ) {
      cout << "[" << XY [ i ] . x << ", " << XY [ i ] . y << "]" << endl ;
    }
    if ( ( ( XY [ i ] . y < Ymin ) || ( XY [ i ] . y > Ymax ) ) || ( ( XY [ i ] . x >= Xmin ) && ( XY [ i ] . x <= Xmax ) ) || ( ( XY [ i ] . y >= Ymin ) && ( XY [ i ] . y <= Ymax ) ) ) {
      cout << "[" << XY [ i ] . x << ", " << XY [ i ] . y << "]" << endl ;
    }
  }
}
