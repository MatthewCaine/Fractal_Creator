#pragma once

#ifndef ZOOMLIST_H_
#define ZOOMLIST_H_

#include "Zoom.h"
#include <vector>
#include <utility>

class ZoomList 
{
private:
	double m_xCenter{0};
	double m_yCenter{0};
	double m_scale{1.0};

	int m_width{0};
	int m_height{0};
	std::vector<Zoom> zooms;

public:
	ZoomList(int, int);
	void add(const Zoom&);
	std::pair<double, double> doZoom(int, int);
};

#endif /* ZOOMLIST_H_ */
