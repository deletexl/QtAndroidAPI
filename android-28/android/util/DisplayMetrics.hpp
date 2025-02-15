#pragma once

#include "../../JObject.hpp"

class JObject;
class JString;

namespace android::util
{
	class DisplayMetrics : public JObject
	{
	public:
		// Fields
		static jint DENSITY_260();
		static jint DENSITY_280();
		static jint DENSITY_300();
		static jint DENSITY_340();
		static jint DENSITY_360();
		static jint DENSITY_400();
		static jint DENSITY_420();
		static jint DENSITY_440();
		static jint DENSITY_560();
		static jint DENSITY_DEFAULT();
		static jint DENSITY_DEVICE_STABLE();
		static jint DENSITY_HIGH();
		static jint DENSITY_LOW();
		static jint DENSITY_MEDIUM();
		static jint DENSITY_TV();
		static jint DENSITY_XHIGH();
		static jint DENSITY_XXHIGH();
		static jint DENSITY_XXXHIGH();
		jfloat density();
		jint densityDpi();
		jint heightPixels();
		jfloat scaledDensity();
		jint widthPixels();
		jfloat xdpi();
		jfloat ydpi();
		
		// QJniObject forward
		template<typename ...Ts> explicit DisplayMetrics(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DisplayMetrics(QJniObject obj);
		
		// Constructors
		DisplayMetrics();
		
		// Methods
		jboolean equals(android::util::DisplayMetrics arg0) const;
		jboolean equals(JObject arg0) const;
		jint hashCode() const;
		void setTo(android::util::DisplayMetrics arg0) const;
		void setToDefaults() const;
		JString toString() const;
	};
} // namespace android::util

