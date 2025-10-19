#include "RailLogistic.h"

Transport* RailLogistic::createTransport() const
{
	return new Train();
}
