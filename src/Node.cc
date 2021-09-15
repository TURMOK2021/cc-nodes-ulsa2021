#include "Node.hh"

Node::Node(Data*& data)
{
  this->data = data;
}

Node::~Node()
{
  
}
Data* Node::GetData() const
{
  return data;
}