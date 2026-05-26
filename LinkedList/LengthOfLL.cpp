#include<iostream>
#include<vector>
using namespace std;
struct Node {
    public:
    int data;
    Node* next;

    public:
    Node(int data1,Node* next1){
        data=data1;
        next=next1;

    }
};

Node* CovertArr2LL(vector<int> &arr){
    Node* head = new Node (arr[0],NULL);
    Node* mover = head;
    for (int i=1;i<arr.size();i++){
        Node* temp = new Node (arr[i],NULL);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

int lengthOfLL (Node* head){
    int cnt =0;
    Node* temp = head;
    while(temp){
        cnt++;
        temp=temp->next;
    }
    return cnt;
}

int main(){
    vector<int>arr={2,5,8,7};
    Node* head = CovertArr2LL(arr);
    Node* temp =head;
   cout << lengthOfLL(head);
    
    
}