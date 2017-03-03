#include <stdlib.h>
#include <stdint.h>
#include <sstream>
#include <map>
#include <vector>

#include <boost/algorithm/string.hpp>
#include <boost/multiprecision/cpp_int.hpp>
#include <boost/version.hpp>

#include "json/json.hpp"

#include "Common.h"
#include "CommonData.h"
#include "Assert.h"

#include "Utils.h"

#include "SHA3.h"
#include "Instruction.h"
#include "Disassm.h"
#include "VMState.h"
#include "Contract.h"

#include "Debug.h"

#define VERBOSE_LEVEL 1

extern uint32_t g_VerboseLevel; // VERBOSE_LEVEL

using namespace std;
using namespace dev;
using namespace dev::eth;