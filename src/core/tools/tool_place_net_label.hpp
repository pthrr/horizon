#pragma once
#include "core/tool.hpp"
#include "schematic/net_label.hpp"
#include "tool_place_junction.hpp"
#include "tool_helper_draw_net_setting.hpp"
#include <forward_list>

namespace horizon {

class ToolPlaceNetLabel : public ToolPlaceJunction, public ToolHelperDrawNetSetting {
public:
    ToolPlaceNetLabel(IDocument *c, ToolID tid);
    bool can_begin() override;
    std::set<InToolActionID> get_actions() const override
    {
        using I = InToolActionID;
        return {
                I::LMB,        I::CANCEL, I::RMB, I::ROTATE, I::MIRROR, I::NET_LABEL_SIZE_INC, I::NET_LABEL_SIZE_DEC,
                I::ENTER_SIZE,
        };
    }

protected:
    std::forward_list<NetLabel *> labels_placed;
    void create_attached() override;
    void delete_attached() override;
    bool begin_attached() override;
    bool update_attached(const ToolArgs &args) override;
    bool check_line(LineNet *li) override;
    NetLabel *la = nullptr;
    Orientation last_orientation = Orientation::RIGHT;
    void apply_settings() override;
};
} // namespace horizon
