// Implement a function to remove all occurrences of a specific character from a string.
#include <stdio.h>
#include <string.h>

void removeChar(char* str, char charToRemove) {
    int i, j;
    int len = strlen(str);
    
    for (i = 0, j = 0; i < len; i++) {
        if (str[i] != charToRemove) {
            str[j++] = str[i];
        }
    }
    
    str[j] = '\0';  // Terminate the string
}

int main() {
    char str[100];
    char c;
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove newline character if present
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }
    
    printf("Enter the character to remove: ");
    scanf(" %c", &c);
    
    removeChar(str, c);
    
    printf("String after removing '%c': %s\n", c, str);
    
    return 0;
}

// #include <stdio.h>
// #include <string.h>
// struct Bookinfo
// {
//       char bname[20];
//       int pages;
//       float price;
// };
// int main()
// {
// struct Bookinfo book[100];
// int i,n;
// printf("\nEnter number of records you want to enter(less than or equal to:100)");
// scanf("%d",&n);
// // Clear the newline character left by scanf
// while (getchar() != '\n');

// for(i=0;i<n;i++)
//     {
//     printf("\nEnter the Name of Book    : ");
//     fgets(book[i].bname, sizeof(book[i].bname), stdin);
//     // Remove newline character if present
//     if (book[i].bname[strlen(book[i].bname) - 1] == '\n')
//         book[i].bname[strlen(book[i].bname) - 1] = '\0';
    
//     printf("\nEnter the Number of Pages : ");
//     scanf("%d",&book[i].pages);
//     // Clear the newline character left by scanf
//     while (getchar() != '\n');
    
//     printf("\nEnter the Price of Book   : ");
//     scanf("%f",&book[i].price);
//     // Clear the newline character left by scanf
//     while (getchar() != '\n');
//     }
// printf("\n--------- Book Details ------------ ");
// for(i=0;i<n;i++)
//     {
//     printf("\nName of Book    : %s",book[i].bname);
//     printf("\nNumber of Pages : %d",book[i].pages);
//     printf("\nPrice of Book   : %.2f",book[i].price);
//     }
// return 0;
// }