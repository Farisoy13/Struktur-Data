#define MAX 5
//Deklarasi Double Stack
class DStack
{
private:
int top1;
int top2;
int ele[MAX];
public:
DStack();
void pushA(int item);
void pushB(int item);
int popA (int *item);
int popB (int *item);
};
