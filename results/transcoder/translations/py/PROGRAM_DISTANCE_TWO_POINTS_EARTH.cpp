double distance ( double lat1 , double lat2 , double lon1 , double lon2 ) {
  lon1 = radians ( lon1 ) ;
  lon2 = radians ( lon2 ) ;
  lat1 = radians ( lat1 ) ;
  lat2 = radians ( lat2 ) ;
  double dlon = lon2 - lon1 ;
  double dlat = lat2 - lat1 ;
  double a = sin ( dlat / 2 ) * * 2 + cos ( lat1 ) * cos ( lat2 ) * sin ( dlon / 2 ) * * 2 ;
  double c = 2 * asin ( sqrt ( a ) ) ;
  double r = 6371 ;
  return ( c * r ) ;
}
