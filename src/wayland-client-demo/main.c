#include <stdio.h>
#include <wayland-client.h>

int main()
{
    struct wl_display *display;

    display = wl_display_connect(NULL);

    if (!display)
    {
        fprintf(stderr, "Failed to connect to Wayland display\n");
        return 1;
    }

    printf("Connected to Wayland display successfully!\n");

    wl_display_disconnect(display);

    return 0;
}