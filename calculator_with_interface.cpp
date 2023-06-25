#include <gtk/gtk.h>

// Declare the GTK+ widgets
GtkWidget *window;
GtkWidget *episodeDurationLabel;
GtkWidget *episodeDurationEntry;
GtkWidget *numEpisodesLabel;
GtkWidget *numEpisodesEntry;
GtkWidget *calculateButton;
GtkWidget *resultLabel;

// Calculate the duration and update the result label
void calculateDuration(GtkWidget *widget, gpointer data) {
    int a, b, h;
    float v;

    // Get the input values from the GTK+ entry fields
    const char *episodeDurationText = gtk_entry_get_text(GTK_ENTRY(episodeDurationEntry));
    const char *numEpisodesText = gtk_entry_get_text(GTK_ENTRY(numEpisodesEntry));

    // Convert the input values to integers
    a = atoi(episodeDurationText);
    b = atoi(numEpisodesText);

    // Calculate the duration
    h = (a * b) / 60;
    v = (((a * b) / 60.0) - h) * 60;

    // Create a string for the result
    char result[100];
    snprintf(result, sizeof(result), "%dh and %.2fmin", h, v);

    // Update the result label with the calculated duration
    gtk_label_set_text(GTK_LABEL(resultLabel), result);
}

int main(int argc, char *argv[]) {
    // Initialize GTK+
    gtk_init(&argc, &argv);

    // Create the main window
    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "Episode Duration Calculator");
    gtk_container_set_border_width(GTK_CONTAINER(window), 10);
    gtk_widget_set_size_request(window, 300, 200);
    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

    // Create a vertical box container
    GtkWidget *vbox = gtk_box_new(GTK_ORIENTATION_VERTICAL, 5);
    gtk_container_add(GTK_CONTAINER(window), vbox);

    // Create the episode duration label and entry field
    episodeDurationLabel = gtk_label_new("Episode duration in minutes:");
    episodeDurationEntry = gtk_entry_new();
    gtk_box_pack_start(GTK_BOX(vbox), episodeDurationLabel, FALSE, FALSE, 0);
    gtk_box_pack_start(GTK_BOX(vbox), episodeDurationEntry, FALSE, FALSE, 0);

    // Create the number of episodes label and entry field
    numEpisodesLabel = gtk_label_new("Number of episodes:");
    numEpisodesEntry = gtk_entry_new();
    gtk_box_pack_start(GTK_BOX(vbox), numEpisodesLabel, FALSE, FALSE, 0);
    gtk_box_pack_start(GTK_BOX(vbox), numEpisodesEntry, FALSE, FALSE, 0);

    // Create the calculate button
    calculateButton = gtk_button_new_with_label("Calculate");
    g_signal_connect(calculateButton, "clicked", G_CALLBACK(calculateDuration), NULL);
    gtk_box_pack_start(GTK_BOX(vbox), calculateButton, FALSE, FALSE, 0);

    // Create the result label
    resultLabel = gtk_label_new("");
    gtk_box_pack_start(GTK_BOX(vbox), resultLabel, FALSE, FALSE, 0);

    // Show all the GTK+ widgets
    gtk_widget_show_all(window);

    // Start the GTK+ main loop
    gtk_main();

    return 0;
}