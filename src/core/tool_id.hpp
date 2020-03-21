#pragma once

namespace horizon {
/**
 * Add new tools here.
 */
enum class ToolID {
    NONE,
    MOVE,
    PLACE_JUNCTION,
    DRAW_LINE,
    DELETE,
    DRAW_ARC,
    ROTATE,
    MIRROR_X,
    MIRROR_Y,
    MAP_PIN,
    MAP_SYMBOL,
    CHANGE_SYMBOL,
    DRAW_NET,
    ADD_COMPONENT,
    PLACE_TEXT,
    PLACE_NET_LABEL,
    DISCONNECT,
    BEND_LINE_NET,
    SELECT_NET_SEGMENT,
    SELECT_NET,
    PLACE_POWER_SYMBOL,
    MOVE_NET_SEGMENT,
    MOVE_NET_SEGMENT_NEW,
    EDIT_SYMBOL_PIN_NAMES,
    PLACE_BUS_LABEL,
    PLACE_BUS_RIPPER,
    MANAGE_BUSES,
    DRAW_POLYGON,
    ENTER_DATUM,
    MOVE_EXACTLY,
    PLACE_HOLE,
    PLACE_PAD,
    PASTE,
    ASSIGN_PART,
    MAP_PACKAGE,
    DRAW_TRACK,
    PLACE_VIA,
    ROUTE_TRACK,
    DRAG_KEEP_SLOPE,
    ADD_PART,
    ANNOTATE,
    SMASH,
    UNSMASH,
    PLACE_SHAPE,
    EDIT_SHAPE,
    IMPORT_DXF,
    MANAGE_NET_CLASSES,
    EDIT_PARAMETER_SET,
    EDIT_PARAMETER_PROGRAM,
    EDIT_PAD_PARAMETER_SET,
    DRAW_POLYGON_RECTANGLE,
    DRAW_LINE_RECTANGLE,
    EDIT_LINE_RECTANGLE,
    EDIT_SCHEMATIC_PROPERTIES,
    ROUTE_TRACK_INTERACTIVE,
    EDIT_VIA,
    ROTATE_ARBITRARY,
    ADD_PLANE,
    EDIT_PLANE,
    UPDATE_PLANE,
    UPDATE_ALL_PLANES,
    CLEAR_PLANE,
    CLEAR_ALL_PLANES,
    EDIT_STACKUP,
    DRAW_DIMENSION,
    SET_DIFFPAIR,
    CLEAR_DIFFPAIR,
    ROUTE_DIFFPAIR_INTERACTIVE,
    SET_VIA_NET,
    CLEAR_VIA_NET,
    DRAG_TRACK_INTERACTIVE,
    LOCK,
    UNLOCK,
    UNLOCK_ALL,
    ADD_VERTEX,
    MANAGE_POWER_NETS,
    PLACE_BOARD_HOLE,
    EDIT_BOARD_HOLE,
    GENERATE_COURTYARD,
    SET_GROUP,
    SET_NEW_GROUP,
    RENAME_GROUP,
    CLEAR_GROUP,
    SET_TAG,
    SET_NEW_TAG,
    RENAME_TAG,
    CLEAR_TAG,
    TOGGLE_GROUP_TAG_VISIBLE,
    COPY_PLACEMENT,
    COPY_TRACKS,
    TUNE_TRACK,
    TUNE_DIFFPAIR,
    TUNE_DIFFPAIR_SKEW,
    MOVE_KEY,
    MOVE_KEY_UP,
    MOVE_KEY_DOWN,
    MOVE_KEY_LEFT,
    MOVE_KEY_RIGHT,
    MOVE_KEY_FINE_UP,
    MOVE_KEY_FINE_DOWN,
    MOVE_KEY_FINE_LEFT,
    MOVE_KEY_FINE_RIGHT,
    SWAP_NETS,
    LINE_LOOP_TO_POLYGON,
    SCALE,
    CHANGE_UNIT,
    EDIT_FRAME_PROPERTIES,
    SET_ALL_NC,
    CLEAR_ALL_NC,
    SET_NC,
    CLEAR_NC,
    ADD_KEEPOUT,
    DELETE_KEEPOUT,
    EDIT_KEEPOUT,
    PLACE_REFDES_AND_VALUE,
    DRAW_LINE_CIRCLE,
    DRAW_POLYGON_CIRCLE,
    DRAW_CONNECTION_LINE,
    BACKANNOTATE_CONNECTION_LINES,
    IMPORT_KICAD_PACKAGE,
    DUPLICATE,
    SMASH_SILKSCREEN_GRAPHICS,
    RENUMBER_PADS,
    FIX,
    UNFIX,
    NOPOPULATE,
    POPULATE,
    POLYGON_TO_LINE_LOOP,
    ROTATE_CURSOR,
    MIRROR_CURSOR,
    PLACE_BOARD_PANEL,
    MANAGE_INCLUDED_BOARDS,
    RELOAD_INCLUDED_BOARDS,
    SMASH_PANEL_OUTLINE,
};
} // namespace horizon
