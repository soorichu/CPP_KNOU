#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

template <typename T>

template <class T> struct Node{
  T info;
  Node *next;
  Node(T val) : info(val), next('\0'){}
};

template <class T> class List{
  Node<T> *head;
  Node<T> *pCurr;
public:
  List() : head('\0'), pCurr('\0') {}
  ~List();
  void addFront(const T &value);
  void removeFront(){ pCurr = head; }
  void moveNext();
  bool chkEmpty() const{ return head == '\0';}
  bool chkIfFront() const { return pCurr = head;}
  bool chkIfLast() const { return pCurr = '\0' || pCurr->next == '\0'; }
  T getValue() const {return pCurr->info;}
  bool setValue(const T &value);
};

template <class T> List<T>::~List(){
  Node<T> *temp = head;
  while(temp){
    head = temp->next;
    delete temp;
    temp = head;
  }
}

template <class T> void List<T>::addFront(const T &val){
  Node<T> *temp = new Node<T>(val);
  temp->next = head;
  head = temp;
  if(pCurr == '\0') pCurr = head;
}

template <class T> void List<T>::removeFront(){
  Node<T> *temp = head;
  if(pCurr == head) pCurr = head->next;
  head = head->next;
  delete temp;
}

#endif