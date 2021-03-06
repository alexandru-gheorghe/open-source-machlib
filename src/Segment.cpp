#include "Segment.hpp"

char * Segment::getName()
{
        return name;
}
uint32_t Segment::getMaxProtection()
{
        return maxProtection;
}

uint32_t Segment::getInitProtection()
{
        return initProtection;
}

uint32_t Segment::getNumberSections()
{
        return numberSections;
}

uint32_t Segment::getFlags()
{
        return flags;
}

std::vector<Section *> Segment::getSections()
{
        return sections;
}
Segment::~Segment()
{
        uint32_t index;
        for(index = 0; index < sections.size(); index++)
                delete sections[index];
}
