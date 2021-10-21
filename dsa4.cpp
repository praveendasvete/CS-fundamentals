#include <bits/stdc++.h>
int count;
using namespace std;



void subsets(char *a,int i,int j,char *temp){
    if(a[i]=='\0'){
        temp[j]='\0';
        cout<<temp<<endl;
        return;
    }
    
    temp[j]=a[i];
    subsets(a,i+1,j+1,temp);
    subsets(a,i+1,j,temp);
}
void subsets(char *a,int i,int j,char *temp){
    if(a[i]=='\0'){
        temp[j]='\0';
        cout<<temp<<endl;
        return;
    }
    
    temp[j]=a[i];
    subsets(a,i+1,j+1,temp);
    subsets(a,i+1,j,temp);
}

int main()
{
    char a[100];
    cin>>a;
    char temp[100];
    subsets(a,0,0,temp);

    return 0;
}
/ A C++ program for Prim's Minimum 
// Spanning Tree (MST) algorithm. The program is 
// for adjacency matrix representation of the graph 
#include <bits/stdc++.h>
using namespace std;

// Number of vertices in the graph 
#define V 5 

// A utility function to find the vertex with 
// minimum key value, from the set of vertices 
// not yet included in MST 
int minKey(int key[], bool mstSet[]) 
{ 
	// Initialize min value 
	int min = INT_MAX, min_index; 

	for (int v = 0; v < V; v++) 
		if (mstSet[v] == false && key[v] < min) 
			min = key[v], min_index = v; 

	return min_index; 
} 

// A utility function to print the 
// constructed MST stored in parent[] 
void printMST(int parent[], int graph[V][V]) 
{ 
	cout<<"Edge \tWeight\n"; 
	for (int i = 1; i < V; i++) 
		cout<<parent[i]<<" - "<<i<<" \t"<<graph[i][parent[i]]<<" \n"; 
} 

// Function to construct and print MST for 
// a graph represented using adjacency 
// matrix representation 
void primMST(int graph[V][V]) 
{ 
	// Array to store constructed MST 
	int parent[V]; 
	
	// Key values used to pick minimum weight edge in cut 
	int key[V]; 
	
	// To represent set of vertices included in MST 
	bool mstSet[V]; 

	// Initialize all keys as INFINITE 
	for (int i = 0; i < V; i++) 
		key[i] = INT_MAX, mstSet[i] = false; 

	// Always include first 1st vertex in MST. 
	// Make key 0 so that this vertex is picked as first vertex. 
	key[0] = 0; 
	parent[0] = -1; // First node is always root of MST 

	// The MST will have V vertices 
	for (int count = 0; count < V - 1; count++)
	{ 
		// Pick the minimum key vertex from the 
		// set of vertices not yet included in MST 
		int u = minKey(key, mstSet); 

		// Add the picked vertex to the MST Set 
		mstSet[u] = true; 

		// Update key value and parent index of 
		// the adjacent vertices of the picked vertex. 
		// Consider only those vertices which are not 
		// yet included in MST 
		for (int v = 0; v < V; v++) 

			// graph[u][v] is non zero only for adjacent vertices of m 
			// mstSet[v] is false for vertices not yet included in MST 
			// Update the key only if graph[u][v] is smaller than key[v] 
			if (graph[u][v] && mstSet[v] == false && graph[u][v] < key[v]) 
				parent[v] = u, key[v] = graph[u][v]; 
	} 

	// print the constructed MST 
	printMST(parent, graph); 
} 

// Driver code
int main() 
{ 
	/* Let us create the following graph 
		2 3 
	(0)--(1)--(2) 
	| / \ | 
	6| 8/ \5 |7 
	| / \ | 
	(3)-------(4) 
			9	 */
	int graph[V][V] = { { 0, 2, 0, 6, 0 }, 
						{ 2, 0, 3, 8, 5 }, 
						{ 0, 3, 0, 0, 7 }, 
						{ 6, 8, 0, 0, 9 }, 
						{ 0, 5, 7, 9, 0 } }; 

	// Print the solution 
	primMST(graph); 

	return 0; 
} 

//added merge sort

#include <iostream>
using namespace std;

//Calling the Merge function to sort and merge two arrays
void Merge(int *a,int s,int e){
    int mid = (s+e)/2;
    
    //Two counters for two arrays
    int i=s;
    int j=mid+1;
    //One counter for array temp
    int k=s;
    
    int temp[100];
    
    //Put the Sorted elements in the Temp array
    while(i<=mid && j<=e){
        if(a[i]<a[j])
        {
            temp[k++] = a[i++];
        }
        else{
            temp[k++] = a[j++];
        }
    }
    //Add the Remaining elements also
    
    while(i<=mid){
         temp[k++] = a[i++];
    }
    while(j<=e){
         temp[k++] = a[j++];
    }
    
    //Put the elements of Temp in original Array a
    for(int i=s;i<=e;i++){
        a[i]=temp[i];
    }
    
}


void MergeSort(int *a,int s,int e){
    //Base Condition
    if(s>=e)
       return;
     
    //Split the Array by half
    int mid = (s+e)/2;
    
    MergeSort(a,s,mid);
    MergeSort(a,mid+1,e);
    
    //Now Merge the Arrays
    Merge(a,s,e);
}


int main()
{
    int a[100];
    int n;
    cout<<"Please Enter the Number of Array Elements "<<endl;
    cin>>n;
    cout<<"Please Enter the Array Elements: "<<endl;
    for(int i=0;i<n;i++)
       cin>>a[i];
    cout<<"Elements before Sorting is: "<<endl;
    for(int i=0;i<n;i++)
       cout<<a[i]<<" ";
    cout<<endl;
    
    //Function Call
    MergeSort(a,0,n-1);
    
    cout<<"The Sorted Array Elements are: ";
    for(int i=0;i<n;i++)
       cout<<a[i]<<" ";

    return 0;
}
