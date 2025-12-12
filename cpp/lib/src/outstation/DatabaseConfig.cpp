/*
 * Copyright 2013-2022 Step Function I/O, LLC
 *
 * Licensed to Green Energy Corp (www.greenenergycorp.com) and Step Function I/O
 * LLC (https://stepfunc.io) under one or more contributor license agreements.
 * See the NOTICE file distributed with this work for additional information
 * regarding copyright ownership. Green Energy Corp and Step Function I/O LLC license
 * this file to you under the Apache License, Version 2.0 (the "License"); you
 * may not use this file except in compliance with the License. You may obtain
 * a copy of the License at:
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "opendnp3/outstation/DatabaseConfig.h"

namespace opendnp3
{

template<class T> void initialize(std::map<uint16_t, T>& map, uint16_t count)
{
    for (uint16_t i = 0; i < count; ++i)
    {
        map[i] = {};
    }
}

DatabaseConfig(uint16_t binary_input, uint16_t analog_input);
{
    initialize(this->binary_input, binary_input);
    initialize(this->double_binary, 0);
    initialize(this->analog_input, analog_input);
    initialize(this->counter, 0);
    initialize(this->frozen_counter, 0);
    initialize(this->binary_output_status, 0);
    initialize(this->analog_output_status, 0);
    initialize(this->time_and_interval, 0);
    initialize(this->octet_string, 0);
};

} // namespace opendnp3
