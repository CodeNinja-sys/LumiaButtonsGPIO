#pragma once


DRIVER_INITIALIZE DriverEntry;

EVT_WDF_DEVICE_CONTEXT_CLEANUP OnContextCleanup;

EVT_WDF_DRIVER_DEVICE_ADD OnDeviceAdd;
