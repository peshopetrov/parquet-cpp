// Licensed to the Apache Software Foundation (ASF) under one
// or more contributor license agreements.  See the NOTICE file
// distributed with this work for additional information
// regarding copyright ownership.  The ASF licenses this file
// to you under the Apache License, Version 2.0 (the
// "License"); you may not use this file except in compliance
// with the License.  You may obtain a copy of the License at
//
//   http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing,
// software distributed under the License is distributed on an
// "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
// KIND, either express or implied.  See the License for the
// specific language governing permissions and limitations
// under the License.

#include <gtest/gtest.h>

#include "parquet/api/io.h"
#include "parquet/api/reader.h"
#include "parquet/api/schema.h"
#include "parquet/api/writer.h"

namespace parquet {

TEST(TestPublicAPI, DoesNotIncludeThrift) {
#ifdef _THRIFT_THRIFT_H_
  FAIL() << "Thrift headers should not be in the public API";
#endif
}

TEST(TestPublicAPI, DoesNotExportDCHECK) {
#ifdef DCHECK
  FAIL() << "parquet/util/logging.h should not be transitively included";
#endif
}

}  // namespace parquet
