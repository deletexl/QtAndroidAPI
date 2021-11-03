#pragma once

#include "../../JObject.hpp"
#include "../../java/lang/Enum.hpp"


namespace android::graphics
{
	class Canvas_VertexMode : public java::lang::Enum
	{
	public:
		// Fields
		static android::graphics::Canvas_VertexMode TRIANGLES();
		static android::graphics::Canvas_VertexMode TRIANGLE_FAN();
		static android::graphics::Canvas_VertexMode TRIANGLE_STRIP();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Canvas_VertexMode(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		Canvas_VertexMode(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::graphics::Canvas_VertexMode valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::graphics

