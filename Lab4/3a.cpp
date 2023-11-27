#include<iostream>
using namespace std;

class strings{
    char m[20];
    char n[20];

    public:

        strings(){
            cout << "Enter the first string: ";
            cin >> m;
            cout << "Enter the second  string: ";
            cin >> n;
        }

         char cpy[20];
         char rev[2][20];
         int *count = new int[2];
         char concat[40];

         int *strCount()
         {
             int i, j;
             for (i = 0; m[i] != '\0'; i++)
                 ;
             for (j = 0; n[j] != '\0'; j++)
                 ;
             count[0] = i; //lenght of array string m
             count[1] = j; //lenght of array string n
             return count;
        }

        char* strCopy(){
            int i;
            for ( i = 0; m[i] != '\0' ; i++)
            {
                cpy[i] = m[i];
            }

            cpy[i] = '\0';
            return cpy;
        }

        void strRev(){

            cout << "The reverse of first string is: ";
            while (count[0] >= 0)
            {
                cout << m[count[0]--];
            }

            cout << "\nThe reverse of second string is: " ;
            while (count[1] >=0)
            {
                cout << n[count[1]--];
            }


            cout << endl << endl;
        }

        char* strCat(int ch){
            int i,j;
            switch (ch)
            {
                case 1:
                    i= 0, j =0;
                    while (m[i] != '\0')
                    {
                        concat[j++] = m[i++];
                    }
                    i = 0;
                    while (n[i] != '\0')
                    {
                        concat[j++] = n[i++];
                    }
                    concat[j] = '\0';
                    break;

                case 2:
                    i= 0, j =0;
                    while (n[i] != '\0')
                    {
                        concat[j++] = n[i++];
                    }
                    i = 0;
                    while (m[i] != '\0')
                    {
                        concat[j++] = m[i++];
                    }
                    concat[j] = '\0';
                    break;

                default:
                    cout << "Invalid Input!!\n";
                    break;
            }
            return concat;
        }
};

int main(){
    strings S1;
    //lenght of strings
    int *count;
    count = S1.strCount();
    cout << "\nThe Lenght of m = " << *(count) << endl;
    cout << "The Lenght of n = " << *(count+1) << endl << endl;

    //copy the string from m to n
    char *cpy;
    cpy = S1.strCopy();
    cout << "The string copied from m to n is : " << cpy << endl << endl;

    //reverse both the strings
    S1.strRev();

    //concatenatio of strings
    int ch;
    cout << "Press 1 to concatenate m with n\nPress 2 to concatenate n with m\n\n";
    cout << "Enter your choice: ";
    cin >> ch;
    cout << "The Concatenated string is : " << S1.strCat(ch) << endl;
} 
