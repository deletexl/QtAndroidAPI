#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class Context;
}
namespace android::view
{
	class Display;
}
namespace android::view
{
	class SurfaceControlViewHost_SurfacePackage;
}
namespace android::view
{
	class View;
}

namespace android::view
{
	class SurfaceControlViewHost : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SurfaceControlViewHost(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SurfaceControlViewHost(QJniObject obj);
		
		// Constructors
		SurfaceControlViewHost(android::content::Context arg0, android::view::Display arg1, JObject arg2);
		
		// Methods
		android::view::SurfaceControlViewHost_SurfacePackage getSurfacePackage() const;
		android::view::View getView() const;
		void relayout(jint arg0, jint arg1) const;
		void release() const;
		void setView(android::view::View arg0, jint arg1, jint arg2) const;
	};
} // namespace android::view

