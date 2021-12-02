#include <iostream>
using namespace std;

#define LH -1
#define EH 0
#define RH 1

struct AVLNODE
{
	int info;
	AVLNODE* left;
	AVLNODE* right;
	int balFactor;
};

AVLNODE* CreateNode(int x)
{
	AVLNODE* p = new AVLNODE;
	if (p != NULL)
	{
		p->info = x;
    	p->left = NULL;
    	p->right = NULL;
    	p->balFactor = EH;
	}
	return p;
}

struct AVLTREE
{
	AVLNODE* root;
};

void Init(AVLTREE &tree)
{
	tree.root == NULL;
}

void LeftLeft(AVLNODE* &p)
{
	AVLNODE* q;
	
	q = p->left;
	p->left = q->right;
	q->right = p;
  
	switch (q->balFactor)
	{
		case LH:
    		p->balFactor = EH;
    		q->balFactor = EH;
    		break;
		case EH:
    		q->balFactor = RH;
    		p->balFactor = LH;
    		break;
	}
	
	p = q;
}

void RightRight(AVLNODE* &p)
{
	AVLNODE* q;
	
	q = p->right;
	p->right = q->left;
	q->left = p;
  
	switch (q->balFactor)
	{
		case EH:
    		p->balFactor = RH;
    		p->balFactor = EH;
    		break;
    	case RH:
    		q->balFactor = EH;
    		p->balFactor = EH;
    		break;
	}
	
	p = q;
}

void RightLeft(AVLNODE* &p)
{
	AVLNODE* p1;
	AVLNODE* p2;
  
	p1 = p->right;
	p2 = p1->left;
	p->right = p2->left;
	p1->left = p2->right;
	p2->left = p;
	p2->right = p1;
  
	switch (p2->balFactor)
	{
		case LH:
    		p->balFactor = EH;
    		p1->balFactor = RH;
    		break;
    	case EH:
    		p->balFactor = EH;
    		p1->balFactor = EH;
    		break;
    	case RH:
    		p->balFactor = LH;
    		p1->balFactor = EH;
    		break;
	}
	
	p2->balFactor = EH;
	p = p2;
}

void LeftRight(AVLNODE* &p)
{
	AVLNODE* p1;
	AVLNODE* p2;
  
	p1 = p->left;
	p2 = p1->right;
	p->left = p2->right;
	p1->right = p2->left;
	p2->right = p;
	p2->left = p1;
  
	switch (p2->balFactor)
	{
		case LH:
    		p1->balFactor = EH;
    		p->balFactor = RH;
    		break;
		case EH:
    		p->balFactor = EH;
    		p1->balFactor = EH;
    		break;
    	case RH:
    		p->balFactor = EH;
    		p1->balFactor = LH;
    		break;
	}
	
	p2->balFactor = EH;
	p = p2;
}

int BalanceLeft(AVLNODE* &p)
{
	AVLNODE *q;
  
	q = p->left;
  
	switch (q->balFactor)
	{
		case LH:
    		LeftLeft(p);
    		return 2;
    	case EH:
    		LeftLeft(p);
    		return 1;
    	case RH:
    		LeftRight(p);
    		return 2;
	}
}

int BalanceRight(AVLNODE* &p)
{
	AVLNODE* q;
	
	q = p->right;
	
	switch (q->balFactor)
	{
		case RH:
    		RightRight(p);
    		return 2;
    	case EH:
    		RightRight(p);
    		return 1;
    	case LH:
    		RightLeft(p);
    		return 2;
	}
}

int InsertNode(AVLNODE* &p, int x)
{
	int Res;
  
	if (p != NULL)
	{
		if (p->info == x) return 0;
						
		if (p->info > x)
		{
    		Res = InsertNode(p->left, x);
			      
    		if (Res < 2) return Res;
      
    		switch (p->balFactor)
    		{	
				case RH:
        			p->balFactor = EH;
        			return 1;
        		case EH:
        			p->balFactor = LH;
        			return 2;
    			case LH:
        			BalanceLeft(p);
        			return 1;
    		}
		}
				
    	if (p->info < x)
		{
			Res = InsertNode(p->right, x);
			
			if (Res < 2) return Res;
			
			switch (p->balFactor)
			{
        		case LH:
        			p->balFactor = EH;
        			return 1;
        		case EH:
        			p->balFactor = RH;
        			return 2;
        		case RH:
        			BalanceRight(p);
        			return 1;
			}
		}
	}
  p = CreateNode(x);
  return 2;
}

void CreateAVLTREE(AVLNODE* &p)
{
	while (true)
	{
		int x; cin >> x;
		if (x == -1) 
			break;
    	InsertNode(p, x);
	}
}

int SearchStandFor(AVLNODE* &q, AVLNODE* &sf)
{
	int Res;
  
	if (sf->left != NULL)
	{
		Res = SearchStandFor(q, sf->left);
    
		if (Res < 2) return Res;
    
		switch (sf->balFactor)
		{
    		case LH:
    			sf->balFactor = EH;
        		return 1;
    		case EH:
    			sf->balFactor = RH;
        		return 2;
    		case RH:
    			return BalanceRight(q);
		}
	}
  
	q->info = sf->info;
	q = sf;
	sf = sf->right;
	return 2;
}

int DeleteNode(AVLNODE* &p, int x)
{
	int Res;
  
	if (p == NULL) return 0;
  
	if (p->info > x)
	{
		Res = DeleteNode(p->left, x);
    
		if (Res < 2) return Res;
		
		switch (p->balFactor)
		{
    		case LH:
    			p->balFactor = EH;
    			return 2;
    		case EH:
    			p->balFactor = RH;
    			return 1;
    		case RH:
    			return BalanceRight(p);
		}
	}
  
	if (p->info < x)
	{
		Res = DeleteNode(p->right, x);
		    
		if (Res < 2) return Res;
		
		switch (p->balFactor)
		{
    		case LH:
    			return BalanceLeft(p);
    		case EH:
    			return 1;
    		case RH:
    			p->balFactor = EH;
    			return 2;
		}
	}
  
	if (p->info == x)
	{
		AVLNODE* q = p;
		    
		if (p->left == NULL)
		{
    		p = p->right;
    		Res = 2;
		}
		    
		else if (p->right == NULL)
    	{
    		p = p->left;
    		Res = 2;
		}   
		     
		else
		{
    		Res = SearchStandFor(q, p->right);
      
    		if (Res < 2) return Res;
      
    		switch (p->balFactor)
    		{
    			case RH:
        			p->balFactor = EH;
        			return 2;
    			case EH: 
        			p->balFactor = LH;
        			return 1;
        		case LH:
        			return BalanceLeft(p);
    		}
		}
		delete q;
		return Res;
	}
}

void NLR(AVLNODE* p)
{
	if (p == NULL) return;
	cout << p->info << "|" << p->balFactor << " ";
	NLR(p->left);
	NLR(p->right);
}

int main()
{
	AVLTREE tree;
	Init(tree);
	CreateAVLTREE(tree.root);
  
	NLR(tree.root);
	cout << endl;
  
	while (true)
	{
		int x; cin >> x;
		if (x == -1) break;
		InsertNode(tree.root, x);
	}
	NLR(tree.root);
	cout << endl;
  
	while (true)
	{
		int y; cin >> y;
		if (y == -1) break;
		DeleteNode(tree.root, y);
	}
	NLR(tree.root);
	
	return 0;
}
 
