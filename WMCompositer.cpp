#include "LibSWC/libswc/swc.h"
#include "Wayland/src/wayland-client.h"



static void new_window(struct swc_window * window)
{
    /* TODO: Implement */
}

static void new_screen(struct swc_screen * screen)
{
    /* TODO: Implement */
}

static const struct swc_manager manager = { &new_screen, &new_window };
wl_display = wl_display_create();
swc_initialize(wl_display, NULL, &manager);
wl_display_run(wl_display);


