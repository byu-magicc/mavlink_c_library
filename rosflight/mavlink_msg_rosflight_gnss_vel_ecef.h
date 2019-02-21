// MESSAGE ROSFLIGHT_GNSS_VEL_ECEF PACKING

#define MAVLINK_MSG_ID_ROSFLIGHT_GNSS_VEL_ECEF 201

typedef struct __mavlink_rosflight_gnss_vel_ecef_t
{
 int32_t ecef_v_x; /*< */
 int32_t ecef_v_y; /*< */
 int32_t ecef_v_z; /*< */
 uint16_t time_of_week; /*< */
} mavlink_rosflight_gnss_vel_ecef_t;

#define MAVLINK_MSG_ID_ROSFLIGHT_GNSS_VEL_ECEF_LEN 14
#define MAVLINK_MSG_ID_201_LEN 14

#define MAVLINK_MSG_ID_ROSFLIGHT_GNSS_VEL_ECEF_CRC 173
#define MAVLINK_MSG_ID_201_CRC 173



#define MAVLINK_MESSAGE_INFO_ROSFLIGHT_GNSS_VEL_ECEF { \
	"ROSFLIGHT_GNSS_VEL_ECEF", \
	4, \
	{  { "ecef_v_x", NULL, MAVLINK_TYPE_INT32_T, 0, 0, offsetof(mavlink_rosflight_gnss_vel_ecef_t, ecef_v_x) }, \
         { "ecef_v_y", NULL, MAVLINK_TYPE_INT32_T, 0, 4, offsetof(mavlink_rosflight_gnss_vel_ecef_t, ecef_v_y) }, \
         { "ecef_v_z", NULL, MAVLINK_TYPE_INT32_T, 0, 8, offsetof(mavlink_rosflight_gnss_vel_ecef_t, ecef_v_z) }, \
         { "time_of_week", NULL, MAVLINK_TYPE_UINT16_T, 0, 12, offsetof(mavlink_rosflight_gnss_vel_ecef_t, time_of_week) }, \
         } \
}


/**
 * @brief Pack a rosflight_gnss_vel_ecef message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_of_week 
 * @param ecef_v_x 
 * @param ecef_v_y 
 * @param ecef_v_z 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_rosflight_gnss_vel_ecef_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint16_t time_of_week, int32_t ecef_v_x, int32_t ecef_v_y, int32_t ecef_v_z)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_ROSFLIGHT_GNSS_VEL_ECEF_LEN];
	_mav_put_int32_t(buf, 0, ecef_v_x);
	_mav_put_int32_t(buf, 4, ecef_v_y);
	_mav_put_int32_t(buf, 8, ecef_v_z);
	_mav_put_uint16_t(buf, 12, time_of_week);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ROSFLIGHT_GNSS_VEL_ECEF_LEN);
#else
	mavlink_rosflight_gnss_vel_ecef_t packet;
	packet.ecef_v_x = ecef_v_x;
	packet.ecef_v_y = ecef_v_y;
	packet.ecef_v_z = ecef_v_z;
	packet.time_of_week = time_of_week;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ROSFLIGHT_GNSS_VEL_ECEF_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_ROSFLIGHT_GNSS_VEL_ECEF;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ROSFLIGHT_GNSS_VEL_ECEF_LEN, MAVLINK_MSG_ID_ROSFLIGHT_GNSS_VEL_ECEF_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ROSFLIGHT_GNSS_VEL_ECEF_LEN);
#endif
}

/**
 * @brief Pack a rosflight_gnss_vel_ecef message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_of_week 
 * @param ecef_v_x 
 * @param ecef_v_y 
 * @param ecef_v_z 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_rosflight_gnss_vel_ecef_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint16_t time_of_week,int32_t ecef_v_x,int32_t ecef_v_y,int32_t ecef_v_z)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_ROSFLIGHT_GNSS_VEL_ECEF_LEN];
	_mav_put_int32_t(buf, 0, ecef_v_x);
	_mav_put_int32_t(buf, 4, ecef_v_y);
	_mav_put_int32_t(buf, 8, ecef_v_z);
	_mav_put_uint16_t(buf, 12, time_of_week);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ROSFLIGHT_GNSS_VEL_ECEF_LEN);
#else
	mavlink_rosflight_gnss_vel_ecef_t packet;
	packet.ecef_v_x = ecef_v_x;
	packet.ecef_v_y = ecef_v_y;
	packet.ecef_v_z = ecef_v_z;
	packet.time_of_week = time_of_week;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ROSFLIGHT_GNSS_VEL_ECEF_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_ROSFLIGHT_GNSS_VEL_ECEF;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ROSFLIGHT_GNSS_VEL_ECEF_LEN, MAVLINK_MSG_ID_ROSFLIGHT_GNSS_VEL_ECEF_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ROSFLIGHT_GNSS_VEL_ECEF_LEN);
#endif
}

/**
 * @brief Encode a rosflight_gnss_vel_ecef struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param rosflight_gnss_vel_ecef C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_rosflight_gnss_vel_ecef_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_rosflight_gnss_vel_ecef_t* rosflight_gnss_vel_ecef)
{
	return mavlink_msg_rosflight_gnss_vel_ecef_pack(system_id, component_id, msg, rosflight_gnss_vel_ecef->time_of_week, rosflight_gnss_vel_ecef->ecef_v_x, rosflight_gnss_vel_ecef->ecef_v_y, rosflight_gnss_vel_ecef->ecef_v_z);
}

/**
 * @brief Encode a rosflight_gnss_vel_ecef struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param rosflight_gnss_vel_ecef C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_rosflight_gnss_vel_ecef_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_rosflight_gnss_vel_ecef_t* rosflight_gnss_vel_ecef)
{
	return mavlink_msg_rosflight_gnss_vel_ecef_pack_chan(system_id, component_id, chan, msg, rosflight_gnss_vel_ecef->time_of_week, rosflight_gnss_vel_ecef->ecef_v_x, rosflight_gnss_vel_ecef->ecef_v_y, rosflight_gnss_vel_ecef->ecef_v_z);
}

/**
 * @brief Send a rosflight_gnss_vel_ecef message
 * @param chan MAVLink channel to send the message
 *
 * @param time_of_week 
 * @param ecef_v_x 
 * @param ecef_v_y 
 * @param ecef_v_z 
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_rosflight_gnss_vel_ecef_send(mavlink_channel_t chan, uint16_t time_of_week, int32_t ecef_v_x, int32_t ecef_v_y, int32_t ecef_v_z)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_ROSFLIGHT_GNSS_VEL_ECEF_LEN];
	_mav_put_int32_t(buf, 0, ecef_v_x);
	_mav_put_int32_t(buf, 4, ecef_v_y);
	_mav_put_int32_t(buf, 8, ecef_v_z);
	_mav_put_uint16_t(buf, 12, time_of_week);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROSFLIGHT_GNSS_VEL_ECEF, buf, MAVLINK_MSG_ID_ROSFLIGHT_GNSS_VEL_ECEF_LEN, MAVLINK_MSG_ID_ROSFLIGHT_GNSS_VEL_ECEF_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROSFLIGHT_GNSS_VEL_ECEF, buf, MAVLINK_MSG_ID_ROSFLIGHT_GNSS_VEL_ECEF_LEN);
#endif
#else
	mavlink_rosflight_gnss_vel_ecef_t packet;
	packet.ecef_v_x = ecef_v_x;
	packet.ecef_v_y = ecef_v_y;
	packet.ecef_v_z = ecef_v_z;
	packet.time_of_week = time_of_week;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROSFLIGHT_GNSS_VEL_ECEF, (const char *)&packet, MAVLINK_MSG_ID_ROSFLIGHT_GNSS_VEL_ECEF_LEN, MAVLINK_MSG_ID_ROSFLIGHT_GNSS_VEL_ECEF_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROSFLIGHT_GNSS_VEL_ECEF, (const char *)&packet, MAVLINK_MSG_ID_ROSFLIGHT_GNSS_VEL_ECEF_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_ROSFLIGHT_GNSS_VEL_ECEF_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_rosflight_gnss_vel_ecef_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint16_t time_of_week, int32_t ecef_v_x, int32_t ecef_v_y, int32_t ecef_v_z)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_int32_t(buf, 0, ecef_v_x);
	_mav_put_int32_t(buf, 4, ecef_v_y);
	_mav_put_int32_t(buf, 8, ecef_v_z);
	_mav_put_uint16_t(buf, 12, time_of_week);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROSFLIGHT_GNSS_VEL_ECEF, buf, MAVLINK_MSG_ID_ROSFLIGHT_GNSS_VEL_ECEF_LEN, MAVLINK_MSG_ID_ROSFLIGHT_GNSS_VEL_ECEF_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROSFLIGHT_GNSS_VEL_ECEF, buf, MAVLINK_MSG_ID_ROSFLIGHT_GNSS_VEL_ECEF_LEN);
#endif
#else
	mavlink_rosflight_gnss_vel_ecef_t *packet = (mavlink_rosflight_gnss_vel_ecef_t *)msgbuf;
	packet->ecef_v_x = ecef_v_x;
	packet->ecef_v_y = ecef_v_y;
	packet->ecef_v_z = ecef_v_z;
	packet->time_of_week = time_of_week;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROSFLIGHT_GNSS_VEL_ECEF, (const char *)packet, MAVLINK_MSG_ID_ROSFLIGHT_GNSS_VEL_ECEF_LEN, MAVLINK_MSG_ID_ROSFLIGHT_GNSS_VEL_ECEF_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROSFLIGHT_GNSS_VEL_ECEF, (const char *)packet, MAVLINK_MSG_ID_ROSFLIGHT_GNSS_VEL_ECEF_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE ROSFLIGHT_GNSS_VEL_ECEF UNPACKING


/**
 * @brief Get field time_of_week from rosflight_gnss_vel_ecef message
 *
 * @return 
 */
static inline uint16_t mavlink_msg_rosflight_gnss_vel_ecef_get_time_of_week(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint16_t(msg,  12);
}

/**
 * @brief Get field ecef_v_x from rosflight_gnss_vel_ecef message
 *
 * @return 
 */
static inline int32_t mavlink_msg_rosflight_gnss_vel_ecef_get_ecef_v_x(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int32_t(msg,  0);
}

/**
 * @brief Get field ecef_v_y from rosflight_gnss_vel_ecef message
 *
 * @return 
 */
static inline int32_t mavlink_msg_rosflight_gnss_vel_ecef_get_ecef_v_y(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int32_t(msg,  4);
}

/**
 * @brief Get field ecef_v_z from rosflight_gnss_vel_ecef message
 *
 * @return 
 */
static inline int32_t mavlink_msg_rosflight_gnss_vel_ecef_get_ecef_v_z(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int32_t(msg,  8);
}

/**
 * @brief Decode a rosflight_gnss_vel_ecef message into a struct
 *
 * @param msg The message to decode
 * @param rosflight_gnss_vel_ecef C-struct to decode the message contents into
 */
static inline void mavlink_msg_rosflight_gnss_vel_ecef_decode(const mavlink_message_t* msg, mavlink_rosflight_gnss_vel_ecef_t* rosflight_gnss_vel_ecef)
{
#if MAVLINK_NEED_BYTE_SWAP
	rosflight_gnss_vel_ecef->ecef_v_x = mavlink_msg_rosflight_gnss_vel_ecef_get_ecef_v_x(msg);
	rosflight_gnss_vel_ecef->ecef_v_y = mavlink_msg_rosflight_gnss_vel_ecef_get_ecef_v_y(msg);
	rosflight_gnss_vel_ecef->ecef_v_z = mavlink_msg_rosflight_gnss_vel_ecef_get_ecef_v_z(msg);
	rosflight_gnss_vel_ecef->time_of_week = mavlink_msg_rosflight_gnss_vel_ecef_get_time_of_week(msg);
#else
	memcpy(rosflight_gnss_vel_ecef, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_ROSFLIGHT_GNSS_VEL_ECEF_LEN);
#endif
}
