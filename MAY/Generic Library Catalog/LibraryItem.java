public class LibraryItem<T> {

    private String title; // Title of the library item
    private String author; // Author or creator of the item
    private T itemID; // Generic item ID (can be Integer, String, etc.)

    /**
     * Constructor to initialize a LibraryItem.
     *
     * @param title  Title of the item
     * @param author Author of the item
     * @param itemID Unique identifier for the item (generic type T)
     */

    public LibraryItem(String title, String author, T itemID) {
        this.title = title;
        this.author = author;
        this.itemID = itemID;
    }

    // Getter for title
    public String getTitle() {
        return title;
    }

    // Getter for author
    public String getAuthor() {
        return author;
    }

    // Getter for itemID
    public T getItemID() {
        return itemID;
    }

    @Override
    public String toString() {
        return "ItemID: " + itemID +
                " | Title: " + title +
                " | Author: " + author;
    }
}