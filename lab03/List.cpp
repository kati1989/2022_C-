//
// Created by Kati on 10/5/2022.
//


#include "List.h"

List::List(){
    cout<<"konstruktor";
    this->first= nullptr;

}

bool List:: exists(int d) const{
    for(Node* ptr=this->first;ptr!=nullptr;ptr=ptr->next){
        if(ptr->value==d){
            return true;
        }
    }
    return  false;
}

int List::size() const{
    int counter=0;
    for(Node * ptr=this->first;ptr!= nullptr;ptr=ptr->next){
        counter++;
    }
    return  counter;
}

bool List:: empty() const{
    for(Node* ptr=this->first;ptr!= nullptr;ptr=ptr->next){
        if(ptr->next= nullptr){
            return true;
        }
    }
    return  false;
}

void List::insertFirst(int d){
//    Node * temp=new Node(d,first);
//    first=temp;
this->first =new Node(d,first);
}

void List::print() const{
    for (Node * ptr=this->first;ptr!= nullptr;ptr=ptr->next){
        cout<<ptr->value<< " ";
    }
}

int List::removeFirst() {
    if (this->first == NULL)
        return NULL;
    // Move the head pointer to the next node
    Node* temp = this->first ;
    this->first  = this->first ->next;
    delete temp;
    return 0;
};


void List::remove(int d, List::DeleteFlag df)
{
    for(Node* ptr=this->first;ptr!=nullptr;ptr=ptr->next){
        if (ptr->next == nullptr)
            return;
        if(ptr->next->value==d ){
            ptr = ptr->next->next;
            free(ptr->next);
            break;
        }
    }
}

List:: ~List(){
cout<<"Destruktor";
//Node * act=this->first;
//while( act!=nullptr){
//    Node * temp=act;
//    act=act->next;
//    delete temp;
//}

while(first!=nullptr){
    Node *temp=first;
    first=first->next;
    delete temp;
    }
};


