#ifndef _PULSAR_REPLAYSPEED_
#define _PULSAR_REPLAYSPEED_

#include <kamek.hpp>

namespace Pulsar {

void ResetReplaySpeed();
u8 GetGhostReplaySpeedIdx();
u32 GetGhostReplaySpeedChangeCount();
void ReplaySimulationUpdate();

}  // namespace Pulsar

#endif
