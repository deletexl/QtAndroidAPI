#pragma once

#include "../../JObject.hpp"

namespace android::view
{
	class InputDevice;
}

namespace android::view
{
	class InputEvent : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit InputEvent(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		InputEvent(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		android::view::InputDevice getDevice() const;
		jint getDeviceId() const;
		jlong getEventTime() const;
		jint getSource() const;
		jboolean isFromSource(jint arg0) const;
	};
} // namespace android::view

