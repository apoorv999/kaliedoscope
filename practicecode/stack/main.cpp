#include <iostream>

using namespace std;
int push(int stacks[],int key,int top);
void disp(int stacks[],int top);
int main()
{
    cout << "Hello world!" << endl;
    int stacks[20];
    int top=-1;
    int key;

    while(1){
    cin>>key;
    top=push(stacks,key,top);
    disp(stacks, top);
}
}
int push(int stacks[], int key,int top)
{
    ++top;
    stacks[top]= key;
    return top;
}

void disp(int stacks[],int top){
    for(int i=0;i<=top;i++){
    cout<<stacks[i]<<" -> ";
}
}
