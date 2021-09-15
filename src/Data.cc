#include "Data.hh"

Data::Data(int value)
{
  this->value = value;
}

Data::~Data()
{

}

int Data::GetValue() const
{
  return value;
}