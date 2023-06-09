#include "../platform.hpp"

#ifdef MAPP_PLATFORM_COCOA

#pragma once

#include "../include/mapp/window.hpp"

namespace mapp
{
	class WindowCocoa : public Window
	{
	public:
		WindowCocoa(const WindowParams& params);
		~WindowCocoa();

		virtual void onUpdate(const float& dt) override;
        
        virtual bool setFullscreen(const bool enable) override;
		virtual bool getIsFullscreen() override;
        
		virtual void* getNativeWindow() override;
		virtual void* getNativeDisplay() override;
	};
}

#endif
