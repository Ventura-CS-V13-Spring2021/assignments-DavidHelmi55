int IntegerArray::getLength(void) const
{
  return length;
}
void IntegerArray::sortArray()
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
  for(i=0; i<N; i++)
  {
    for(j=i+1; j<N; j++)
      {
        if(array[j] > array[i])
          {
            temp = array[i];
            array[i] = array[j];
            arr[j] = temp;
          }
      }
  }
}
void IntegerArray::fillUp(void)
{
  { 
    int N;
    int array[N];
    for(int i=0;i<N;i++)
      array[i]=rand()%100;
    N = length;    
  }
}
void getPrimenumber(void) const;
{
  for(i=0; i<N; i++)
  {
    for(i=2; i<num ; i++)
    {
      if(num %i==0)
      break;    
    }
    if ( i == num )
      cout << num << " is a prime number\n";
  }
}
void IntegerArray::printAll(void) const
{
  cout << array[i] << endl;
}

// for this code I reffered to what I did in assingment 6-1 but I needed to add a new member function in order to find the prime number.I also needed to add code for the descending order of the numbers. 