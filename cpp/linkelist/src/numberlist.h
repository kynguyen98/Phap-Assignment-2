#ifndef _NUMBERLIST_
#define _NUMBERLIST_
    struct node
{
    node* next;
    int data;
};

class numberlist{
    private:

    node* head;
    public:
    numberlist();
    ~numberlist();
    void appendnode(int);
    void insertnode(int);
    void deletenode(int);
    void displaynode() const;
};
#endif