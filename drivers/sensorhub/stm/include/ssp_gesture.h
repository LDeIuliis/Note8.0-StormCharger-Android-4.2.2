/*
 *  Copyright (C) 2013, Samsung Electronics Co. Ltd. All Rights Reserved.
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 */

#ifndef __SSP_GESTURE_H__
#define __SSP_GESTURE_H__

#ifdef CONFIG_SSP_GESTURE
extern int initialize_gesture_sensor(struct ssp_data *);
extern void remove_gesture_sensor(struct ssp_data *);
extern void report_gesture_data(struct ssp_data *, struct sensor_value *);
extern void get_gesture_sensordata(char *, int *, struct sensor_value *);

#else
static inline int initialize_gesture_sensor(struct ssp_data *data)
{
	return 0;
}

static inline void remove_gesture_sensor(struct ssp_data *data)
{
	return;
}

static inline void report_gesture_data(struct ssp_data *data,
	struct sensor_value *ges)
{
	return;
}

static inline void get_gesture_sensordata(char *pchRcvDataFrame,
	int *iDataIdx, struct sensor_value *sensorsdata)
{
	return;
}

#endif
#endif /* __SSP_GESTURE_H__ */
