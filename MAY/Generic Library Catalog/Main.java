import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        GenericCatalog<Integer> catalog = new GenericCatalog<>();
        Scanner sc = new Scanner(System.in);

        System.out.println("=== Welcome to the Generic Library Catalog System ===");

        while (true) {

            System.out.println("\n==== Library Catalog Menu ====");
            System.out.println("1. Add Item");
            System.out.println("2. Remove Item");
            System.out.println("3. View All Items");
            System.out.println("4. Get Item Details");
            System.out.println("5. Exit");
            System.out.print("Enter your choice: ");

            int choice;

            try {
                choice = Integer.parseInt(sc.nextLine().trim());
            } catch (NumberFormatException e) {
                System.out.println("ERROR: Please enter a valid number.");
                continue;
            }

            switch (choice) {

                case 1: // Add a new item
                    try {
                        System.out.print("Enter Item ID (integer): ");
                        int id = Integer.parseInt(sc.nextLine().trim());

                        System.out.print("Enter Title: ");
                        String title = sc.nextLine();

                        System.out.print("Enter Author: ");
                        String author = sc.nextLine();

                        LibraryItem<Integer> item = new LibraryItem<>(title, author, id);
                        catalog.addItem(item);

                    } catch (NumberFormatException e) {
                        System.out.println("ERROR: Item ID must be an integer.");
                    }

                    break;

                case 2: // Remove an item
                    try {
                        System.out.print("Enter Item ID to remove: ");
                        int removeId = Integer.parseInt(sc.nextLine().trim());

                        catalog.removeItem(removeId);

                    } catch (NumberFormatException e) {
                        System.out.println("ERROR: Item ID must be an integer.");
                    }

                    break;

                case 3: // View all items
                    catalog.displayItems();
                    break;

                case 4: // Get item details
                    try {
                        System.out.print("Enter Item ID: ");
                        int searchId = Integer.parseInt(sc.nextLine().trim());

                        catalog.getItemDetails(searchId);

                    } catch (NumberFormatException e) {
                        System.out.println("ERROR: Item ID must be an integer.");
                    }

                    break;

                case 5: // Exit
                    System.out.println("Exiting Library Catalog System. Goodbye!");
                    sc.close();
                    return;

                default:
                    System.out.println("ERROR: Invalid choice. Please select 1-5.");
            }
        }
    }
}