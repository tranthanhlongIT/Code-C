#include <iostream>
using namespace std;

int dem = 0;

struct WORD
{
  string EN;
  string VN;
};

struct BNODE
{
  WORD info;
  BNODE* left;
  BNODE* right;
};

BNODE* CreateNode(WORD x)
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

int InsertNode(BNODE* &p, WORD x)
{
  if (p != NULL)
  {
    if (p->info.EN == x.EN) return 0;
    else if (p->info.EN > x.EN) return InsertNode(p->left, x);
    else if (p->info.EN < x.EN) return InsertNode(p->right, x);
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
  int n; cin >> n;
  for (int i = 0; i < n; i++)
  {
    WORD x;
    cin >> x.EN;
    cin.ignore();
    getline(cin, x.VN);
    InsertNode(p, x);
  }
}

void PrintBSTREE(BNODE *p, string prefix)
{
  if (p == NULL) return;
  PrintBSTREE(p->right, prefix + "|    ");
  cout << prefix + "|-->" << p->info.EN << endl;
  PrintBSTREE(p->left, prefix + "|    ");
}

void LNR(BNODE* p)
{
  if (p == NULL) return;
  LNR(p->left);
  cout << p->info.EN << " ";
  LNR(p->right);
}

BNODE* SearchNode(BNODE* &p, WORD x)
{
  if (p == NULL) return NULL;
  dem++;
  if (p->info.EN == x.EN) return p;
  if (p->info.EN > x.EN) return SearchNode(p->left, x);
  if (p->info.EN < x.EN) return SearchNode(p->right, x);
}


int main()
{
  BSTREE tree;
  Init(tree);
  
  CreateBSTREE(tree.root);
  PrintBSTREE(tree.root, "");

  LNR(tree.root);
  cout << endl;
  
  WORD x; cin >> x.EN;
  BNODE* p = SearchNode(tree.root, x);
  if (p != NULL)
  {
    cout << p->info.VN << endl;
  }
  else cout << "NOT FOUND" << endl;
  
  cout << dem << endl;

  
  return 0;
}
    
    

