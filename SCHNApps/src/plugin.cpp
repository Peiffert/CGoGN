#include "plugin.h"

#include <GL/glew.h>

namespace CGoGN
{

namespace SCHNApps
{

Plugin::Plugin() : m_schnapps(NULL)
{
	glewInit();
}

Plugin::~Plugin()
{}


//const QString& Plugin::getName() const
//{ /*return m_name; */return QString("pipo");}

QString Plugin::getName()
{ return m_name; }

QString Plugin::getFilePath()
{ return m_filePath; }

SCHNApps* Plugin::getSCHNApps()
{ return m_schnapps; }


void Plugin::setName(const QString& name)
{ m_name = name; }

void Plugin::setFilePath(const QString& f)
{ m_filePath = f; }

void Plugin::setSCHNApps(SCHNApps* s)
{ m_schnapps = s; }

} // namespace SCHNApps

} // namespace CGoGN
