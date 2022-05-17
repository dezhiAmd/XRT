/**
 * Copyright (C) 2021 Xilinx, Inc
 *
 * Licensed under the Apache License, Version 2.0 (the "License"). You may
 * not use this file except in compliance with the License. A copy of the
 * License is located at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
 * License for the specific language governing permissions and limitations
 * under the License.
 */

#ifndef __SectionAIEResources_h_
#define __SectionAIEResources_h_

// ----------------------- I N C L U D E S -----------------------------------
#include "Section.h"

// --------- C L A S S :  S e c t i o n A I E R e s o u r c e s --------------
class SectionAIEResources : public Section {
 private:
  // Static initializer helper class
  static class init {
   public:
    init();
  } initializer;
};

#endif
