int IntegerArray::getLength(void) const
{
  return length;
}
int IntegerArray::getLastelm(void) const
{
  return int i = a[a.size() - 1];;
}
void IntegerArray::printAll(void) const
{
  cout << array[i] << endl;
}
void IntegerArray::fillUp(void)
{
  { 
    int N;
    int array[N];
    for(int i=0;i<N;i++)
      array[i]=rand()%101;
    N = length;    
  }
}
void IntegerArray::sortAsc()
{
  int temp;
  for(i=0; i<N; i++)
  {
    for(j=i+1; j<N; j++)
      {
        if(array[j] < array[i])
          {
            temp = array[i];
            array[i] = array[j];
            arr[j] = temp;
          }
      }
  }
}
void IntegerArray::removeLastelm(void)
{
  length = length - 1
}
void IntegerArray::appendElement(int v)
{
  v = rand()%101;
  array[100] = v
  length += 1;
}

//For this part I just coded what the comments were telling me to do. I have a feeling I did this incorrectly.