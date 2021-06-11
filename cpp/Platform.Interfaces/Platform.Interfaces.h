#pragma once

#ifndef PLATFORM_INTERFACES
#define PLATFORM_INTERFACES

#include <concepts>

#include "ICounter[TResult, TArgument].h"
#include "ICounter[TResult].h"
#include "ICriterionMatcher.h"
#include "IFactory.h"
#include "IProperties.h"
#include "IProvider[TProvided, TArgument].h"
#include "IProvider[TProvided].h"
#include "ISetter[TValue, TArgument].h"
#include "ISetter[TValue].h"

#include "IProperty.h" // depend on ISetter and IProvider

#endif // PLATFORM_INTERFACES
