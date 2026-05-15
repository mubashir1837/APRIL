import java.util.ArrayList;

/**
 * A generic catalog class to store and manage library items.
 * @param <T> The type of item ID used in LibraryItem
 */

public class GenericCatalog<T> {

    // Internal list to store library items
    private ArrayList<LibraryItem<T>> items;

    public GenericCatalog() {
        items = new ArrayList<>();
    }

    /**
     * Adds a new library item to the catalog.
     * @param item The LibraryItem to add
     */

    public void addItem(LibraryItem<T> item) {
        items.add(item);
        System.out.println("SUCCESS: Item added, " + item.getTitle());
    }

    /**
     * Removes a library item from the catalog by its ID.
     * @param itemID The ID of the item to remove
     */

    public void removeItem(T itemID) {
        boolean found = false;

        for (int i = 0; i < items.size(); i++) {
            if (items.get(i).getItemID().equals(itemID)) {
                System.out.println("SUCCESS: Removed item, " + items.get(i).getTitle());
                items.remove(i);
                found = true;
                break;
            }
        }

        if (!found) {
            // Error handling: item not found
            System.out.println("ERROR: No item found with ID: " + itemID);
        }
    }

    /**
     * Retrieves and prints details of a specific item by ID.
     * @param itemID The ID of the item to retrieve
     */

    public void getItemDetails(T itemID) {
        for (LibraryItem<T> item : items) {
            if (item.getItemID().equals(itemID)) {
                System.out.println("FOUND: " + item);
                return;
            }
        }

        System.out.println("ERROR: Item with ID " + itemID + " not found.");
    }

    /**
     * Displays all items currently in the catalog.
     */

    public void displayItems() {
        if (items.isEmpty()) {
            System.out.println("INFO: The catalog is currently empty.");
            return;
        }

        System.out.println("\n========== Library Catalog ==========");

        for (LibraryItem<T> item : items) {
            System.out.println("  " + item);
        }

        System.out.println("Total items: " + items.size());
        System.out.println("======================================");
    }
}