#include <stdio.h>


// Enum to represent garage status
enum Status {
    Out_garage,
    Enter_garage,
};

// Struct for personal information
struct Person_Info {
    char name[20];
    char id[15];
    char phone[12];
};

// Struct for room information
struct Person_Inf_Room {
    int Floor_num;
    int Room_num;
};

// Struct for car information
struct Person_Inf_Car {
    char Car_type[15];
    char Car_color[15];
    char Car_id[15];
};

// Struct for garage operation
    struct Garage_operation {
    struct Person_Info Person;
    struct Person_Inf_Room Room;
    struct Person_Inf_Car Car;
    int Garage_Capacity;
} GG;
// Function prototypes
void Capacity_Garage();
void Car_Status();
void info_person();
void Info_Room();
void Info_Car();

// Global functions
void Capacity_Garage() {
    printf("Enter current capacity of the garage: ");
    scanf("%d", &GG.Garage_Capacity);
}

void Car_Status() { // to display the current capcity of Garage if user out or enter
    int choice;
    printf("Choose status for the garage (0 for out, 1 for enter): ");
    scanf("%d", &choice);

    if (choice == Out_garage) {
        GG.Garage_Capacity -= 1;
    } else if (choice == Enter_garage) {
        GG.Garage_Capacity += 1;
    }

    printf("Current garage capacity: %d\n", GG.Garage_Capacity);
}


void info_person(){ // User Enter information about hisself
    printf("PLZ ....... GIVE SECURITY INFORAMATION ABOUT YOURSELF \n");
    printf("--------------------------------------------------------- \n");
    printf("PlZ ..... ENTER YOUR NAME   \n");
    scanf("%s",&GG.Person.name);
    printf("PlZ ..... ENTER YOUR Id  \n");
    scanf("%s",&GG.Person.id);
    printf("PlZ ..... ENTER YOUR Phone \n");
    scanf("%s",&GG.Person.phone);
    printf(" --------- THANKS SIR -------- \n");

}
void Info_Room(){ // user Enter information about his room to easily reach to him
    printf("PLZ ....... GIVE SECURITY INFORAMATION ABOUT YOUR ROOM \n");
    printf("--------------------------------------------------------- \n");
    printf("PlZ ..... ENTER YOUR Room Floor_Num  \n");
    scanf("%i",&GG.Room.Floor_num);
    printf("PlZ ..... ENTER YOUR Room_Num  \n");
    scanf("%i",&GG.Room.Room_num);
    printf(" --------- THANKS SIR -------- \n");
   
}
void Info_Car(){ // user Enter information about his car for saftey
    printf("PLZ ....... GIVE SECURITY INFORAMATION ABOUT YOUR CAR \n");
    printf("--------------------------------------------------------- \n");
    printf("PlZ ..... ENTER YOUR CAR_TYPE  \n");
    scanf("%s",&GG.Car.Car_type);
    printf("PlZ ..... ENTER YOUR CAR_COLOR  \n");
    scanf("%s",&GG.Car.Car_color);
    printf("PlZ ..... ENTER YOUR CAR ID \n");
    scanf("%s",&GG.Car.Car_id);
    printf(" --------- THANKS SIR -------- \n");

}

int main() {
    int message = 1;

    while (message == 1) {
        printf("Do you want to use the garage system? (1 for yes, 0 for no): ");
        scanf("%d", &message);
        
        if (message != 1) {
            break;
        }
        // call functions to display 
        Capacity_Garage();
        Car_Status();
        info_person();
        Info_Room();
        Info_Car();

        if (GG.Garage_Capacity >= 150) { // the full capcity is 150 car
            printf("Sorry, the garage is full.\n");
            break;
        }
    }

    return 0;
}
