#include <iostream>
using namespace std;

int dem = 0;

struct BNODE
{
  int info;
  BNODE* left;
  BNODE* right;
};

BNODE* CreateNode(int x)
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

struct BSTREE
{
  BNODE* root;
};

void Init(BSTREE &tree)
{
  tree.root = NULL;
}

int InsertNode(BNODE* &p, int x)
{
  if (p != NULL)
  {
    if (p->info == x) return 0;
    else if (p->info > x) return InsertNode(p->left, x);
    else if (p->info < x) return InsertNode(p->right, x);
  }
  else
  {
    p = CreateNode(x);
    if (p == NULL) return -1;
    return 1;
  }
}

void CreateBSTREE(BNODE* &p)
{
  while (true)
  {
    int x; cin >> x;
    if (x == -1)
      break;
    InsertNode(p, x);
  }
}

void PrintBSTREE(BNODE* p, string prefix)
{
  if (p == NULL) return;
  PrintBSTREE(p->right, prefix + "|    ");
  cout << prefix + "|-->" << p->info << endl;
  PrintBSTREE(p->left, prefix + "|    ");
}

void NLR(BNODE* p)
{
  if (p == NULL)
    return;
  cout << p->info << " ";
  NLR(p->left);
  NLR(p->right);
}

void LNR(BNODE* p)
{
  if (p == NULL)
    return;
  LNR(p->left);
  cout << p->info << " ";
  LNR(p->right);
}

void LRN(BNODE* p)
{
  if (p == NULL)
  	return;
  LRN(p->left);
  LRN(p->right);
  cout << p->info << " ";
}

int GetMin(BNODE* p)
{
  if (p->left == NULL)
    return p->info;
  return GetMin(p->left);
}

int GetMax(BNODE* p)
{
  if (p->right == NULL)
    return p->info;
  return GetMax(p->right);
}

BNODE* SearchNode(BNODE* p, int x)
{
  if (p == NULL) return NULL;
  if (p->info == x) return p;
  dem++;
  if (p->info > x) return SearchNode(p->left, x);
  if (p->info < x) return SearchNode(p->right, x);
}

void SearchStandFor(BNODE* &q, BNODE* &sf)
{
  if (sf->left != NULL)
    SearchStandFor(q, sf->left);
  else
  {
    q->info = sf->info;
    q = sf;
    sf = sf->right;
  }
}

bool DeleteNode(BNODE* &p, int x)
{
  if (p == NULL) return false;
  if (p->info > x) return DeleteNode(p->left, x);
  if (p->info < x) return DeleteNode(p->right, x);
  if (p->info == x)
  {
    BNODE* q = p;
    if (p->left == NULL && p->right == NULL)
      p = NULL;
    else if (p->left == NULL)
      p = p->right;
    else if (p->right == NULL)
      p = p->left;
    else SearchStandFor(q, p->right);
    delete q;
    return true;
  }
}


int main()
{
  BSTREE tree;
  Init(tree);
  
  CreateBSTREE(tree.root);
  PrintBSTREE(tree.root, "");
  
  NLR(tree.root);
  cout << endl;
  LNR(tree.root);
  cout << endl;
  LRN(tree.root);
  cout << endl;
  
  int max = GetMax(tree.root);
  int min = GetMin(tree.root);
  cout << min << " " << max << endl;
  
  int x; cin >> x;
  BNODE* p = SearchNode(tree.root, x);
  if (p != NULL)
  	cout << dem << endl;
  else cout << "-1" << endl;
  
  int y; cin >> y;
  bool result = DeleteNode(tree.root, y);
  PrintBSTREE(tree.root, "");
  if (result)
    LNR(tree.root);
  else cout << "FAILURE" << endl;
  
  return 0;
}

