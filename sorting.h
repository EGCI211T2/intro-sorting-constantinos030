void swap(int &a,int &b);
void sort(int *a,int N);
void display(int *a,int N);
void selectionsort(int *a, int N);

void display(int *a, int N)
{
    for (int i = 0; i<N ; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void sort(int *a, int N)
{
bool sort_check = false;


do{ 
for (int i = 0; i<N-1; i++){if (a[i]>a[i+1]) swap(a[i], a[i+1]);}

{ // Sorting Checker
int check_count = 0;
for(int i = 0; i<N-1; i++)
{
    if (a[i]<a[i+1] || a[i]==a[i+1] ) check_count++;
}
if (check_count == N-1) sort_check = true;
}

}while (sort_check == false);


}

void swap(int &a, int &b)
{
    int temp;

    temp=b;
    b=a;
    a=temp;
}

void selectionsort(int *a,int N)
{   
    int min_index = 0, min_val = 0;
    for (int i=0; i < N-1; i++)
    {
        min_index = i;
        for (int j=i+1; j < N; j++) { if (a[j]<a[i]) min_index = j;}

        min_val = a[i];
        a[i] = a[min_index];
        a[min_index] = min_val;
    }
}