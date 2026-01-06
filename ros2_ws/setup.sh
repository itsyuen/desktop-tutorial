# ROS2 wrokspace setup bash script to check terminal setup
#!/usr/bin/env bash

# Get directory of this script (ros2_ws root)
WS_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"

# Source ROS 2 base
source /opt/ros/jazzy/setup.bash

# Environment check
~/bin/check_dev_env.sh

# Optional: source workspace overlay (future-proof)
if [ -f "${WS_DIR}/install/setup.bash" ]; then
  source "${WS_DIR}/install/setup.bash"
fi



