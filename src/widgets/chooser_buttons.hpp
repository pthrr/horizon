#pragma once
#include <gtkmm.h>
#include "util/uuid.hpp"
#include "common/common.hpp"
#include "dialogs/pool_browser_dialog.hpp"

namespace horizon {
class ViaPadstackButton : public Gtk::Button {
public:
    ViaPadstackButton(class ViaPadstackProvider &vpp);
    Glib::PropertyProxy<horizon::UUID> property_selected_uuid()
    {
        return p_property_selected_uuid.get_proxy();
    }

protected:
    Glib::Property<UUID> p_property_selected_uuid;
    class ViaPadstackProvider &via_padstack_provider;

    void on_clicked() override;
    void update_label();
};
} // namespace horizon
