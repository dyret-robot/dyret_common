/**
 * Shared definitions for joints in DyRET
 */

#pragma once

namespace dyret {
	// Joint names describe the order which joints are published
	// in `ServoStateArray.msg` for revolute joints.
	static const std::string JOINT_NAMES[] = {
		"dyret::fl_joint1", "dyret::fl_joint2", "dyret::fl_joint3",
		"dyret::fr_joint1", "dyret::fr_joint2", "dyret::fr_joint3",
		"dyret::br_joint1", "dyret::br_joint2", "dyret::br_joint3",
		"dyret::bl_joint1", "dyret::bl_joint2", "dyret::bl_joint3"};

	// Extension names describe the order which joints are published
	// in `ServoStateArray.msg` for prismatic joints.
	static const std::string EXT_NAMES[] = {
		"dyret::fl_ext1", "dyret::fl_ext2",
		"dyret::fr_ext1", "dyret::fr_ext2",
		"dyret::br_ext1", "dyret::br_ext2",
		"dyret::bl_ext1", "dyret::bl_ext2"};
}
