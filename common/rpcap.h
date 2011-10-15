/*
 * OpenWIPS-ng - common stuff.
 * Copyright (C) 2011 Thomas d'Otreppe de Bouvette
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 *
 *      Author: Thomas d'Otreppe de Bouvette
 */

#ifndef RPCAP_H_
#define RPCAP_H_
#include "server-client.h"

#define MAX_NB_PACKET_TO_SEND_AT_ONCE 50

// Receives data to inject, just add it to the queue
int handle_rpcap_data(unsigned char ** data, int * data_length, struct client_params * params);

// Sends data
int send_rpcap_data(unsigned char ** data, int * data_length, struct client_params * params);

#endif /* RPCAP_H_ */
