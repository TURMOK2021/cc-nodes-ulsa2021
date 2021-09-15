#pragma once
#include "Data.hh"

class Node
{
private:
  Data* data{nullptr};
public:
  Node* nextNode{nullptr};
  Node(Data*& data);
  ~Node();
  Data* GetData() const;
};
