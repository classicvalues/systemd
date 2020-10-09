/* SPDX-License-Identifier: LGPL-2.1+ */
#pragma once

#include "systemctl.h"

int logind_set_wall_message(void);

int logind_reboot(enum action a);
int logind_check_inhibitors(enum action a);

int prepare_firmware_setup(void);
int prepare_boot_loader_menu(void);
int prepare_boot_loader_entry(void);

int logind_schedule_shutdown(void);
int logind_cancel_shutdown(void);

int help_boot_loader_entry(void);