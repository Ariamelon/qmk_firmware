/* Copyright 2023 Aria Tso (@Ariamelon)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#pragma once

// Structure to hold ADC values
typedef struct adc_values {
    uint16_t volts;
    uint16_t amps;
} adc_values;

// Functions to update ADC
adc_values adc_update(adc_values next_adc_state);
uint32_t adc_get_values(uint32_t trigger_time, void *cb_arg);
