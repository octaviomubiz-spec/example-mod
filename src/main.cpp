#include <Geode/Geode.hpp>
#include <Geode/modify/EditorUI.hpp>

using namespace geode::prelude;

class $modify(MyEditorUI, EditorUI) {
    bool init(LevelEditorLayer* editor) {
        if (!EditorUI::init(editor)) return false;

        // Create a test popup when the editor opens
        FLAlertLayer::create(
            "Assistant Test",      // Title at the top
            "Test UI Works!",      // Message in the middle
            "Awesome"              // Button text
        )->show();

        return true;
    }
};
