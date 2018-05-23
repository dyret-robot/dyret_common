/**
 * Shared definitions for joints in DyRET
 */

#pragma once

namespace dyret {
	// Joint names describe the order which joints are published
	// in `ServoStateArray.msg` for revolute joints.
	static const std::string JOINT_NAMES[] = {
		"dyret::fl_joint0", "dyret::fl_joint1", "dyret::fl_joint2",
		"dyret::fr_joint0", "dyret::fr_joint1", "dyret::fr_joint2",
		"dyret::br_joint0", "dyret::br_joint1", "dyret::br_joint2",
		"dyret::bl_joint0", "dyret::bl_joint1", "dyret::bl_joint2"};

	// Extension names describe the order which joints are published
	// in `ServoStateArray.msg` for prismatic joints.
	static const std::string EXT_NAMES[] = {
		"dyret::fl_ext0", "dyret::fl_ext1",
		"dyret::fr_ext0", "dyret::fr_ext1",
		"dyret::br_ext0", "dyret::br_ext1",
		"dyret::bl_ext0", "dyret::bl_ext1"};
}
