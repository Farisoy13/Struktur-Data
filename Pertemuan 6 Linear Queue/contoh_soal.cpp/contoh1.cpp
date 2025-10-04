#define MAX 5
class Queue
{
private:
int front,rear;
int ele[MAX];
public:
//Inisialisasi queue
Queue()
{
front = 0;
rear = -1;
}
int isFull();
int isEmpty();
void insertQueue(int item);
int deleteQueue(int *item);
};
