#include <Geode/Geode.hpp>
#include <Geode/modify/EditorUI.hpp>

using namespace geode::prelude;

class $modify(MyEditorUI, EditorUI) {
    bool init(LevelEditorLayer* editor) {
        if (!EditorUI::init(editor)) return false;
        
        // 1. Detect if Tinker or BetterEdit are active on the phone
        bool hasTinker = Loader::get()->isModLoaded("alphalaneous.tinker");
        bool hasBetterEdit = Loader::get()->isModLoaded("hjfod.betteredit");
        
        // 2. Log it to the console so we know it's working
        log::info("Creator Pilot Loaded! Tinker: {}, BetterEdit: {}", hasTinker, hasBetterEdit);
        
        return true;
    }
};
