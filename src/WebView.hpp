#pragma once

#include <gtkmm/widget.h>
#include <webkit2/webkit2.h>

class WebView
    : public Gtk::Widget
{
    public:
        WebView();
        ~WebView() override;

    public:
        operator WebKitWebView*();

    public:
        void   refresh();
        double zoomIn();
        double zoomOut();
        double zoomLevel() const noexcept;

    private:
        double m_zoomLevel;
};
