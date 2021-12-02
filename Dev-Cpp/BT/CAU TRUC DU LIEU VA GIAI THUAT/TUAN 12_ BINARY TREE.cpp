#include <iostream>
#include <iomanip>
using namespace std;

struct BNODE
{
  int info;
  BNODE* left;
  BNODE* right;
};

struct BTREE
{
  BNODE* root;
};

BNODE* CreateNODE(int x)
{
  BNODE* p = new BNODE;
  if (p != NULL)
  {
    p->info = x;
    p->left = NULL;
    p->right = NULL;
  }
  return p;
}

void Init(BTREE &tree)
{
  tree.root = NULL;
}

void CreateBTREE(BNODE* &p)
{
  int x; cin >> x;
  if (x == -1)
    return;
  p = CreateNODE(x);
  if (p != NULL)
  {
    CreateBTREE(p->left);
    CreateBTREE(p->right);
  }
}

void NLR(BNODE *p)
{
  if (p == NULL)
  	return;
  cout << p->info << " ";
  NLR(p->left);
  NLR(p->right);
}

void LNR(BNODE *p)
{
  if (p == NULL)
    return;
  LNR(p->left);
  cout << p->info << " ";
  LNR(p->right);
}

void LRN(BNODE *p)
{
  if (p == NULL)
    return;
  LRN(p->left);
  LRN(p->right);
  cout << p->info << " ";
}

int CountNode(BNODE *p)
{
  if (p == NULL) return 0;
  int a = CountNode(p->left);
  int b = CountNode(p->right);
  return (a + b + 1);
}

int CountLeaf(BNODE *p)
{
  if (p == NULL) return 0;
  int a = CountLeaf(p->left);
  int b = CountLeaf(p->right);
  if (p->left == NULL && p->right == NULL)
    return (a + b + 1);
  else 
    return (a + b);
}

int CountBranch(BNODE *p)
{
  int TotalNodes = CountNode(p);
  int LeafNodes = CountLeaf(p);
  return TotalNodes - LeafNodes;
}

int GetHeight(BNODE *p)
{
  if (p == NULL)
    return -1;
  int a = GetHeight(p->left);
  int b = GetHeight(p->right);
  int max = a > b ? a : b;
  return (max + 1);
}

void DisplayAtLevel(BNODE *p, int k)
{
  if (p == NULL) return;
  if (k == 0)
  {
    cout << p->info << " ";
    return;
  }
  DisplayAtLevel(p->left, k - 1);
  DisplayAtLevel(p->right, k - 1);
}

void PrintBTREE(BNODE* p, string prefix)
{
  if (p == NULL)
    return;
  PrintBTREE(p->right, prefix + "|   ");
  cout << prefix + "|-->" << p->info << endl;
  PrintBTREE(p->left, prefix + "|   ");
}

    
  



int main()
{
  BTREE t;
  Init(t);
  
  CreateBTREE(t.root);
  PrintBTREE(t.root, "");
 
  NLR(t.root);  cout << endl;
  LNR(t.root);  cout << endl;
  LRN(t.root);  cout << endl;
  
  int Height = GetHeight(t.root);
  int Total = CountNode(t.root);
  int Leaf = CountLeaf(t.root);
  int Branch = CountBranch(t.root);
  cout << Height << " " << Total << " " << Leaf << " " << Branch << endl;
  DisplayAtLevel(t.root, 3); 
  return 0;
}


  
