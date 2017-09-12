#include<stdbool.h>
#include<stdio.h>
#include <ctype.h>
#include <memory.h>

void main() {
    createMenu();
}

createMenu() {
    while (true) {
        int choice;
        printf("-----------------Menu-----------------\n");
        printf("1. Show student list.\n");
        printf("2. Add new student.\n");
        printf("3. Edit student.\n");
        printf("4. Delete student.\n");
        printf("5. Exit.\n");
        printf("--------------------------------------\n");
        printf("Please enter your choice: ");
        scanf("%d", &choice);
        getchar();
        if (choice == 5) {
            printf("End program.");
            break;
        }
        switch (choice) {
            case 1:
                // do something.
                printf("Show student list.\n");
                showStudent();
                break;
            case 2:
                // do something.
                addStudent();
                break;
            case 3:
                // do something.
                printf("Edit student.\n");
                editStudent();
                break;
            case 4:
                // do something.
                printf("Delete student.\n");
                deleteStudent();
                break;
            default:
                //
                printf("Please enter a number from 1 to 5.\n");
                break;
        }
    }
}

showStudent() {

}

addStudent() {
    char name[100];
    char birthday[100];
    char phone[100];
    bool ten = false; // Ki?m tra tính h?p l? c?a tên.
    printf("Add new student.\n");
    while (!ten){ // N?u tên không h?p l? th? ti?p t?c b?t nh?p.
        printf("Please enter name: \n");
        fgets(name, sizeof(name), stdin);
        int lengthOfName = strlen(name) - 1;
        if (lengthOfName < 3) {
            printf("Name is too short. Please enter number between 3 to 15 character.\n");
        } else if (lengthOfName > 15) {
            printf("Name is too long. Please enter number between 3 to 15 character.\n");
        } else {
            ten = true;
        }
    }
    printf("Please enter birthday: \n");
    fgets(birthday, sizeof(birthday), stdin);

    printf("Please enter phone: \n");
    fgets(phone, sizeof(phone), stdin);
    printf("\tThe student information \n");
	printf("---------------------------- \n");
    printf("Name: %s \n", name);
    printf("Birthday: %s \n", birthday);
    printf("Phone: %s \n", phone);
}

editStudent() {

}

deleteStudent() {

}
