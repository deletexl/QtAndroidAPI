#pragma once

#include "./InputEvent.hpp"

class JCharArray;
namespace android::os
{
	class Parcel;
}
namespace android::view
{
	class KeyCharacterMap;
}
namespace android::view
{
	class KeyCharacterMap_KeyData;
}
namespace android::view
{
	class KeyEvent_DispatcherState;
}
class JObject;
class JString;

namespace android::view
{
	class KeyEvent : public android::view::InputEvent
	{
	public:
		// Fields
		static jint ACTION_DOWN();
		static jint ACTION_MULTIPLE();
		static jint ACTION_UP();
		static JObject CREATOR();
		static jint FLAG_CANCELED();
		static jint FLAG_CANCELED_LONG_PRESS();
		static jint FLAG_EDITOR_ACTION();
		static jint FLAG_FALLBACK();
		static jint FLAG_FROM_SYSTEM();
		static jint FLAG_KEEP_TOUCH_MODE();
		static jint FLAG_LONG_PRESS();
		static jint FLAG_SOFT_KEYBOARD();
		static jint FLAG_TRACKING();
		static jint FLAG_VIRTUAL_HARD_KEY();
		static jint FLAG_WOKE_HERE();
		static jint KEYCODE_0();
		static jint KEYCODE_1();
		static jint KEYCODE_11();
		static jint KEYCODE_12();
		static jint KEYCODE_2();
		static jint KEYCODE_3();
		static jint KEYCODE_3D_MODE();
		static jint KEYCODE_4();
		static jint KEYCODE_5();
		static jint KEYCODE_6();
		static jint KEYCODE_7();
		static jint KEYCODE_8();
		static jint KEYCODE_9();
		static jint KEYCODE_A();
		static jint KEYCODE_ALL_APPS();
		static jint KEYCODE_ALT_LEFT();
		static jint KEYCODE_ALT_RIGHT();
		static jint KEYCODE_APOSTROPHE();
		static jint KEYCODE_APP_SWITCH();
		static jint KEYCODE_ASSIST();
		static jint KEYCODE_AT();
		static jint KEYCODE_AVR_INPUT();
		static jint KEYCODE_AVR_POWER();
		static jint KEYCODE_B();
		static jint KEYCODE_BACK();
		static jint KEYCODE_BACKSLASH();
		static jint KEYCODE_BOOKMARK();
		static jint KEYCODE_BREAK();
		static jint KEYCODE_BRIGHTNESS_DOWN();
		static jint KEYCODE_BRIGHTNESS_UP();
		static jint KEYCODE_BUTTON_1();
		static jint KEYCODE_BUTTON_10();
		static jint KEYCODE_BUTTON_11();
		static jint KEYCODE_BUTTON_12();
		static jint KEYCODE_BUTTON_13();
		static jint KEYCODE_BUTTON_14();
		static jint KEYCODE_BUTTON_15();
		static jint KEYCODE_BUTTON_16();
		static jint KEYCODE_BUTTON_2();
		static jint KEYCODE_BUTTON_3();
		static jint KEYCODE_BUTTON_4();
		static jint KEYCODE_BUTTON_5();
		static jint KEYCODE_BUTTON_6();
		static jint KEYCODE_BUTTON_7();
		static jint KEYCODE_BUTTON_8();
		static jint KEYCODE_BUTTON_9();
		static jint KEYCODE_BUTTON_A();
		static jint KEYCODE_BUTTON_B();
		static jint KEYCODE_BUTTON_C();
		static jint KEYCODE_BUTTON_L1();
		static jint KEYCODE_BUTTON_L2();
		static jint KEYCODE_BUTTON_MODE();
		static jint KEYCODE_BUTTON_R1();
		static jint KEYCODE_BUTTON_R2();
		static jint KEYCODE_BUTTON_SELECT();
		static jint KEYCODE_BUTTON_START();
		static jint KEYCODE_BUTTON_THUMBL();
		static jint KEYCODE_BUTTON_THUMBR();
		static jint KEYCODE_BUTTON_X();
		static jint KEYCODE_BUTTON_Y();
		static jint KEYCODE_BUTTON_Z();
		static jint KEYCODE_C();
		static jint KEYCODE_CALCULATOR();
		static jint KEYCODE_CALENDAR();
		static jint KEYCODE_CALL();
		static jint KEYCODE_CAMERA();
		static jint KEYCODE_CAPS_LOCK();
		static jint KEYCODE_CAPTIONS();
		static jint KEYCODE_CHANNEL_DOWN();
		static jint KEYCODE_CHANNEL_UP();
		static jint KEYCODE_CLEAR();
		static jint KEYCODE_COMMA();
		static jint KEYCODE_CONTACTS();
		static jint KEYCODE_COPY();
		static jint KEYCODE_CTRL_LEFT();
		static jint KEYCODE_CTRL_RIGHT();
		static jint KEYCODE_CUT();
		static jint KEYCODE_D();
		static jint KEYCODE_DEL();
		static jint KEYCODE_DPAD_CENTER();
		static jint KEYCODE_DPAD_DOWN();
		static jint KEYCODE_DPAD_DOWN_LEFT();
		static jint KEYCODE_DPAD_DOWN_RIGHT();
		static jint KEYCODE_DPAD_LEFT();
		static jint KEYCODE_DPAD_RIGHT();
		static jint KEYCODE_DPAD_UP();
		static jint KEYCODE_DPAD_UP_LEFT();
		static jint KEYCODE_DPAD_UP_RIGHT();
		static jint KEYCODE_DVR();
		static jint KEYCODE_E();
		static jint KEYCODE_EISU();
		static jint KEYCODE_ENDCALL();
		static jint KEYCODE_ENTER();
		static jint KEYCODE_ENVELOPE();
		static jint KEYCODE_EQUALS();
		static jint KEYCODE_ESCAPE();
		static jint KEYCODE_EXPLORER();
		static jint KEYCODE_F();
		static jint KEYCODE_F1();
		static jint KEYCODE_F10();
		static jint KEYCODE_F11();
		static jint KEYCODE_F12();
		static jint KEYCODE_F2();
		static jint KEYCODE_F3();
		static jint KEYCODE_F4();
		static jint KEYCODE_F5();
		static jint KEYCODE_F6();
		static jint KEYCODE_F7();
		static jint KEYCODE_F8();
		static jint KEYCODE_F9();
		static jint KEYCODE_FOCUS();
		static jint KEYCODE_FORWARD();
		static jint KEYCODE_FORWARD_DEL();
		static jint KEYCODE_FUNCTION();
		static jint KEYCODE_G();
		static jint KEYCODE_GRAVE();
		static jint KEYCODE_GUIDE();
		static jint KEYCODE_H();
		static jint KEYCODE_HEADSETHOOK();
		static jint KEYCODE_HELP();
		static jint KEYCODE_HENKAN();
		static jint KEYCODE_HOME();
		static jint KEYCODE_I();
		static jint KEYCODE_INFO();
		static jint KEYCODE_INSERT();
		static jint KEYCODE_J();
		static jint KEYCODE_K();
		static jint KEYCODE_KANA();
		static jint KEYCODE_KATAKANA_HIRAGANA();
		static jint KEYCODE_L();
		static jint KEYCODE_LANGUAGE_SWITCH();
		static jint KEYCODE_LAST_CHANNEL();
		static jint KEYCODE_LEFT_BRACKET();
		static jint KEYCODE_M();
		static jint KEYCODE_MANNER_MODE();
		static jint KEYCODE_MEDIA_AUDIO_TRACK();
		static jint KEYCODE_MEDIA_CLOSE();
		static jint KEYCODE_MEDIA_EJECT();
		static jint KEYCODE_MEDIA_FAST_FORWARD();
		static jint KEYCODE_MEDIA_NEXT();
		static jint KEYCODE_MEDIA_PAUSE();
		static jint KEYCODE_MEDIA_PLAY();
		static jint KEYCODE_MEDIA_PLAY_PAUSE();
		static jint KEYCODE_MEDIA_PREVIOUS();
		static jint KEYCODE_MEDIA_RECORD();
		static jint KEYCODE_MEDIA_REWIND();
		static jint KEYCODE_MEDIA_SKIP_BACKWARD();
		static jint KEYCODE_MEDIA_SKIP_FORWARD();
		static jint KEYCODE_MEDIA_STEP_BACKWARD();
		static jint KEYCODE_MEDIA_STEP_FORWARD();
		static jint KEYCODE_MEDIA_STOP();
		static jint KEYCODE_MEDIA_TOP_MENU();
		static jint KEYCODE_MENU();
		static jint KEYCODE_META_LEFT();
		static jint KEYCODE_META_RIGHT();
		static jint KEYCODE_MINUS();
		static jint KEYCODE_MOVE_END();
		static jint KEYCODE_MOVE_HOME();
		static jint KEYCODE_MUHENKAN();
		static jint KEYCODE_MUSIC();
		static jint KEYCODE_MUTE();
		static jint KEYCODE_N();
		static jint KEYCODE_NAVIGATE_IN();
		static jint KEYCODE_NAVIGATE_NEXT();
		static jint KEYCODE_NAVIGATE_OUT();
		static jint KEYCODE_NAVIGATE_PREVIOUS();
		static jint KEYCODE_NOTIFICATION();
		static jint KEYCODE_NUM();
		static jint KEYCODE_NUMPAD_0();
		static jint KEYCODE_NUMPAD_1();
		static jint KEYCODE_NUMPAD_2();
		static jint KEYCODE_NUMPAD_3();
		static jint KEYCODE_NUMPAD_4();
		static jint KEYCODE_NUMPAD_5();
		static jint KEYCODE_NUMPAD_6();
		static jint KEYCODE_NUMPAD_7();
		static jint KEYCODE_NUMPAD_8();
		static jint KEYCODE_NUMPAD_9();
		static jint KEYCODE_NUMPAD_ADD();
		static jint KEYCODE_NUMPAD_COMMA();
		static jint KEYCODE_NUMPAD_DIVIDE();
		static jint KEYCODE_NUMPAD_DOT();
		static jint KEYCODE_NUMPAD_ENTER();
		static jint KEYCODE_NUMPAD_EQUALS();
		static jint KEYCODE_NUMPAD_LEFT_PAREN();
		static jint KEYCODE_NUMPAD_MULTIPLY();
		static jint KEYCODE_NUMPAD_RIGHT_PAREN();
		static jint KEYCODE_NUMPAD_SUBTRACT();
		static jint KEYCODE_NUM_LOCK();
		static jint KEYCODE_O();
		static jint KEYCODE_P();
		static jint KEYCODE_PAGE_DOWN();
		static jint KEYCODE_PAGE_UP();
		static jint KEYCODE_PAIRING();
		static jint KEYCODE_PASTE();
		static jint KEYCODE_PERIOD();
		static jint KEYCODE_PICTSYMBOLS();
		static jint KEYCODE_PLUS();
		static jint KEYCODE_POUND();
		static jint KEYCODE_POWER();
		static jint KEYCODE_PROFILE_SWITCH();
		static jint KEYCODE_PROG_BLUE();
		static jint KEYCODE_PROG_GREEN();
		static jint KEYCODE_PROG_RED();
		static jint KEYCODE_PROG_YELLOW();
		static jint KEYCODE_Q();
		static jint KEYCODE_R();
		static jint KEYCODE_REFRESH();
		static jint KEYCODE_RIGHT_BRACKET();
		static jint KEYCODE_RO();
		static jint KEYCODE_S();
		static jint KEYCODE_SCROLL_LOCK();
		static jint KEYCODE_SEARCH();
		static jint KEYCODE_SEMICOLON();
		static jint KEYCODE_SETTINGS();
		static jint KEYCODE_SHIFT_LEFT();
		static jint KEYCODE_SHIFT_RIGHT();
		static jint KEYCODE_SLASH();
		static jint KEYCODE_SLEEP();
		static jint KEYCODE_SOFT_LEFT();
		static jint KEYCODE_SOFT_RIGHT();
		static jint KEYCODE_SOFT_SLEEP();
		static jint KEYCODE_SPACE();
		static jint KEYCODE_STAR();
		static jint KEYCODE_STB_INPUT();
		static jint KEYCODE_STB_POWER();
		static jint KEYCODE_STEM_1();
		static jint KEYCODE_STEM_2();
		static jint KEYCODE_STEM_3();
		static jint KEYCODE_STEM_PRIMARY();
		static jint KEYCODE_SWITCH_CHARSET();
		static jint KEYCODE_SYM();
		static jint KEYCODE_SYSRQ();
		static jint KEYCODE_SYSTEM_NAVIGATION_DOWN();
		static jint KEYCODE_SYSTEM_NAVIGATION_LEFT();
		static jint KEYCODE_SYSTEM_NAVIGATION_RIGHT();
		static jint KEYCODE_SYSTEM_NAVIGATION_UP();
		static jint KEYCODE_T();
		static jint KEYCODE_TAB();
		static jint KEYCODE_THUMBS_DOWN();
		static jint KEYCODE_THUMBS_UP();
		static jint KEYCODE_TV();
		static jint KEYCODE_TV_ANTENNA_CABLE();
		static jint KEYCODE_TV_AUDIO_DESCRIPTION();
		static jint KEYCODE_TV_AUDIO_DESCRIPTION_MIX_DOWN();
		static jint KEYCODE_TV_AUDIO_DESCRIPTION_MIX_UP();
		static jint KEYCODE_TV_CONTENTS_MENU();
		static jint KEYCODE_TV_DATA_SERVICE();
		static jint KEYCODE_TV_INPUT();
		static jint KEYCODE_TV_INPUT_COMPONENT_1();
		static jint KEYCODE_TV_INPUT_COMPONENT_2();
		static jint KEYCODE_TV_INPUT_COMPOSITE_1();
		static jint KEYCODE_TV_INPUT_COMPOSITE_2();
		static jint KEYCODE_TV_INPUT_HDMI_1();
		static jint KEYCODE_TV_INPUT_HDMI_2();
		static jint KEYCODE_TV_INPUT_HDMI_3();
		static jint KEYCODE_TV_INPUT_HDMI_4();
		static jint KEYCODE_TV_INPUT_VGA_1();
		static jint KEYCODE_TV_MEDIA_CONTEXT_MENU();
		static jint KEYCODE_TV_NETWORK();
		static jint KEYCODE_TV_NUMBER_ENTRY();
		static jint KEYCODE_TV_POWER();
		static jint KEYCODE_TV_RADIO_SERVICE();
		static jint KEYCODE_TV_SATELLITE();
		static jint KEYCODE_TV_SATELLITE_BS();
		static jint KEYCODE_TV_SATELLITE_CS();
		static jint KEYCODE_TV_SATELLITE_SERVICE();
		static jint KEYCODE_TV_TELETEXT();
		static jint KEYCODE_TV_TERRESTRIAL_ANALOG();
		static jint KEYCODE_TV_TERRESTRIAL_DIGITAL();
		static jint KEYCODE_TV_TIMER_PROGRAMMING();
		static jint KEYCODE_TV_ZOOM_MODE();
		static jint KEYCODE_U();
		static jint KEYCODE_UNKNOWN();
		static jint KEYCODE_V();
		static jint KEYCODE_VOICE_ASSIST();
		static jint KEYCODE_VOLUME_DOWN();
		static jint KEYCODE_VOLUME_MUTE();
		static jint KEYCODE_VOLUME_UP();
		static jint KEYCODE_W();
		static jint KEYCODE_WAKEUP();
		static jint KEYCODE_WINDOW();
		static jint KEYCODE_X();
		static jint KEYCODE_Y();
		static jint KEYCODE_YEN();
		static jint KEYCODE_Z();
		static jint KEYCODE_ZENKAKU_HANKAKU();
		static jint KEYCODE_ZOOM_IN();
		static jint KEYCODE_ZOOM_OUT();
		static jint MAX_KEYCODE();
		static jint META_ALT_LEFT_ON();
		static jint META_ALT_MASK();
		static jint META_ALT_ON();
		static jint META_ALT_RIGHT_ON();
		static jint META_CAPS_LOCK_ON();
		static jint META_CTRL_LEFT_ON();
		static jint META_CTRL_MASK();
		static jint META_CTRL_ON();
		static jint META_CTRL_RIGHT_ON();
		static jint META_FUNCTION_ON();
		static jint META_META_LEFT_ON();
		static jint META_META_MASK();
		static jint META_META_ON();
		static jint META_META_RIGHT_ON();
		static jint META_NUM_LOCK_ON();
		static jint META_SCROLL_LOCK_ON();
		static jint META_SHIFT_LEFT_ON();
		static jint META_SHIFT_MASK();
		static jint META_SHIFT_ON();
		static jint META_SHIFT_RIGHT_ON();
		static jint META_SYM_ON();
		
		// QJniObject forward
		template<typename ...Ts> explicit KeyEvent(const char *className, const char *sig, Ts...agv) : android::view::InputEvent(className, sig, std::forward<Ts>(agv)...) {}
		KeyEvent(QJniObject obj);
		
		// Constructors
		KeyEvent(android::view::KeyEvent &arg0);
		KeyEvent(jint arg0, jint arg1);
		KeyEvent(android::view::KeyEvent &arg0, jlong arg1, jint arg2);
		KeyEvent(jlong arg0, JString arg1, jint arg2, jint arg3);
		KeyEvent(jlong arg0, jlong arg1, jint arg2, jint arg3, jint arg4);
		KeyEvent(jlong arg0, jlong arg1, jint arg2, jint arg3, jint arg4, jint arg5);
		KeyEvent(jlong arg0, jlong arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7);
		KeyEvent(jlong arg0, jlong arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, jint arg8);
		KeyEvent(jlong arg0, jlong arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, jint arg8, jint arg9);
		
		// Methods
		static android::view::KeyEvent changeAction(android::view::KeyEvent arg0, jint arg1);
		static android::view::KeyEvent changeFlags(android::view::KeyEvent arg0, jint arg1);
		static android::view::KeyEvent changeTimeRepeat(android::view::KeyEvent arg0, jlong arg1, jint arg2);
		static android::view::KeyEvent changeTimeRepeat(android::view::KeyEvent arg0, jlong arg1, jint arg2, jint arg3);
		static jint getDeadChar(jint arg0, jint arg1);
		static jint getMaxKeyCode();
		static jint getModifierMetaStateMask();
		static jboolean isGamepadButton(jint arg0);
		static jboolean isModifierKey(jint arg0);
		static jint keyCodeFromString(JString arg0);
		static JString keyCodeToString(jint arg0);
		static jboolean metaStateHasModifiers(jint arg0, jint arg1);
		static jboolean metaStateHasNoModifiers(jint arg0);
		static jint normalizeMetaState(jint arg0);
		jboolean dispatch(JObject arg0) const;
		jboolean dispatch(JObject arg0, android::view::KeyEvent_DispatcherState arg1, JObject arg2) const;
		jint getAction() const;
		JString getCharacters() const;
		jint getDeviceId() const;
		jchar getDisplayLabel() const;
		jlong getDownTime() const;
		jlong getEventTime() const;
		jint getFlags() const;
		android::view::KeyCharacterMap getKeyCharacterMap() const;
		jint getKeyCode() const;
		jboolean getKeyData(android::view::KeyCharacterMap_KeyData arg0) const;
		jchar getMatch(JCharArray arg0) const;
		jchar getMatch(JCharArray arg0, jint arg1) const;
		jint getMetaState() const;
		jint getModifiers() const;
		jchar getNumber() const;
		jint getRepeatCount() const;
		jint getScanCode() const;
		jint getSource() const;
		jint getUnicodeChar() const;
		jint getUnicodeChar(jint arg0) const;
		jboolean hasModifiers(jint arg0) const;
		jboolean hasNoModifiers() const;
		jboolean isAltPressed() const;
		jboolean isCanceled() const;
		jboolean isCapsLockOn() const;
		jboolean isCtrlPressed() const;
		jboolean isFunctionPressed() const;
		jboolean isLongPress() const;
		jboolean isMetaPressed() const;
		jboolean isNumLockOn() const;
		jboolean isPrintingKey() const;
		jboolean isScrollLockOn() const;
		jboolean isShiftPressed() const;
		jboolean isSymPressed() const;
		jboolean isSystem() const;
		jboolean isTracking() const;
		void setSource(jint arg0) const;
		void startTracking() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::view

