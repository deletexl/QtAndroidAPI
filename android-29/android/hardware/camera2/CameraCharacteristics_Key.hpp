#pragma once

#include "../../../JObject.hpp"

class JClass;
class JObject;
class JString;

namespace android::hardware::camera2
{
	class CameraCharacteristics_Key : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CameraCharacteristics_Key(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CameraCharacteristics_Key(QJniObject obj);
		
		// Constructors
		CameraCharacteristics_Key(JString arg0, JClass arg1);
		
		// Methods
		jboolean equals(JObject arg0) const;
		JString getName() const;
		jint hashCode() const;
		JString toString() const;
	};
} // namespace android::hardware::camera2

