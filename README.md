# ***XYZ Airlines Management System***

This C++ program is a simple management system for XYZ Airlines, allowing users to manage customer details, book flights, and generate tickets with charges. The program is structured into several classes and functions, providing a user-friendly interface through a console-based menu system.

# **Features**

a) Customer Management: Users can input and manage customer details including name, age, gender, phone number, and address.

b)Flight Booking: The system provides options to select and book flights to different destinations.

c)Ticket Generation: Tickets are generated with essential details like customer ID, name, destination, flight cost, etc.

d)File Handling: The program utilizes file operations to store and retrieve customer details and ticket information.

# **Usage**

a) Compilation: Compile the source code using a C++ compiler.

b) Execution: Run the compiled executable.

c) Main Menu: Follow the prompts displayed on the console to navigate through different functionalities.

Option 1: Add Customer Details

Option 2: Book Flights

Option 3: Generate Tickets and View Charges

Option 4: Exit

d) Input and Selection: Provide necessary inputs and make selections as guided by the interface.

e) Ticket Collection: After booking flights and generating tickets, view and collect the generated tickets.

f) Exiting: Choose the exit option when done.

# **Code Structure Overview** :

a)Header Includes: The code begins with necessary header includes such as <iostream>, <fstream>, and <iomanip> for handling input/output operations and file handling.

b)Namespace Declaration: The using namespace std; statement is used to simplify code by avoiding repetition of the std:: prefix.

c)Function Prototypes: The mainMenu() function prototype is declared before its definition to allow calling it from within other functions.

d)Class Declarations:

   . Management: A class with a constructor that initializes the main menu.

   . details: A class for storing customer details.

   . Regestration: A class for flight registration and selection.

   . ticket: A class inheriting from Regestration and details, responsible for generating and displaying tickets.

e)Global Variables:

  . Static variables and arrays are declared within the details and Regestration classes.
