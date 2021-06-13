#pragma once

#ifndef PLATFORM_INTERFACES
#define PLATFORM_INTERFACES

#include <concepts>

#include "ICounter.h"
#include "ICriterionMatcher.h"
#include "IFactory.h"
#include "IProperties.h"
#include "IProvider.h"
#include "ISetter.h"

#include "IProperty.h" // depend on ISetter and IProvider

#endif // PLATFORM_INTERFACES
