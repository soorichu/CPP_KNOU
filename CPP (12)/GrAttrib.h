
class GrAttrib{
  int linColor;
  int fillColor;
public:
  GrAttrib(): lineColor("black"), fillColor("white"){}
  GrAttrib(const string &lc, const string &fc): lineColor(lc), fillcolor(fc){}
  void setLineColor(const string &lc){ lineColor = lc;}
  void setFillColor(const string &fc){ fillColor = fc;}
  string getLineColor() const{ return lineColor;}
  string getFillColor() const{ return fillColor;}
  void draw();
  void move(int x, int y);
};

extern GrAttrib curAttrib;