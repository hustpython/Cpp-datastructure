# ifndef COORDINATE_H
# define COORDINATE_H
class Coordinate 
{
public: 
  Coordinate();
  Coordinate(double x,double y);
  virtual ~Coordinate();
  double getX();
  double getY();
private: 
  double m_iX;
  double m_iY;
};
Coordinate::Coordinate()
{

}
Coordinate::Coordinate(double x, double y)
{
    m_iX = x;
    m_iY = y;
}
Coordinate::~Coordinate(){ }

double Coordinate::getX()
{
    return m_iX;
}
double Coordinate::getY()
{
    return m_iY;
}
# endif