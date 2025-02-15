#pragma once

#include "../../../JObject.hpp"

class JClass;
class JObject;
class JString;

namespace android::hardware::camera2
{
	class CaptureResult_Key : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CaptureResult_Key(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CaptureResult_Key(QJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		JString getName() const;
		jint hashCode() const;
		JString toString() const;
	};
} // namespace android::hardware::camera2

