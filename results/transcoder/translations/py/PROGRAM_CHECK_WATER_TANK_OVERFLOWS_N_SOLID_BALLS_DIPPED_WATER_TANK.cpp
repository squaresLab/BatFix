void overflow ( double H , double r , double h , double N , double R ) {
  double tank_cap = 3.14 * r * r * H ;
  double water_vol = 3.14 * r * r * h ;
  double balls_vol = N * ( 4 / 3 ) * 3.14 * R * R ;
  double vol = water_vol + balls_vol ;
  if ( vol > tank_cap ) cout << "Overflow" << endl ;
  else cout << "Not in overflow state" << endl ;
}
