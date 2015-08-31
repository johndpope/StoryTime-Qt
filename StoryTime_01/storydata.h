#ifndef STORYDATA_H
#define STORYDATA_H

#include "options.h"
#include <QString>

class StoryData
{
public:
    StoryData();

private:
    Options options[2];

    QString owner;
    QString content;
    double timeStamp;
};

#endif // STORYDATA_H
