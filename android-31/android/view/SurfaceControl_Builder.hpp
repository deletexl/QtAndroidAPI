#pragma once

#include "../../JObject.hpp"

namespace android::view
{
	class SurfaceControl;
}
class JString;

namespace android::view
{
	class SurfaceControl_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SurfaceControl_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SurfaceControl_Builder(QJniObject obj);
		
		// Constructors
		SurfaceControl_Builder();
		
		// Methods
		android::view::SurfaceControl build() const;
		android::view::SurfaceControl_Builder setBufferSize(jint arg0, jint arg1) const;
		android::view::SurfaceControl_Builder setFormat(jint arg0) const;
		android::view::SurfaceControl_Builder setName(JString arg0) const;
		android::view::SurfaceControl_Builder setOpaque(jboolean arg0) const;
		android::view::SurfaceControl_Builder setParent(android::view::SurfaceControl arg0) const;
	};
} // namespace android::view

