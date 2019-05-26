int jklogic(int J,int K)
{
  int Q=0,NQ=1,CLK=1,s,r;
  s=!(J&&CLK&&NQ);
  r=!(K&&CLK&&Q);
  Q=!(s&&NQ);
  NQ=!(r&&Q);
  return Q;
}
