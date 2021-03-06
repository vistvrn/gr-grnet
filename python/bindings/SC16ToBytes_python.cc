/*
 * Copyright 2020 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(SC16ToBytes.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(940903ddaaa6cebcd3fead9641394b19)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <grnet/SC16ToBytes.h>
// pydoc.h is automatically generated in the build directory
#include <SC16ToBytes_pydoc.h>

void bind_SC16ToBytes(py::module& m)
{

    using SC16ToBytes    = ::gr::grnet::SC16ToBytes;


    py::class_<SC16ToBytes, gr::sync_interpolator,
        std::shared_ptr<SC16ToBytes>>(m, "SC16ToBytes", D(SC16ToBytes))

        .def(py::init(&SC16ToBytes::make),
           D(SC16ToBytes,make)
        )
        



        ;




}








