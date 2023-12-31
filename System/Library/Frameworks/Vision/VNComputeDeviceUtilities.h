//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VNComputeDeviceUtilities : NSObject
{
}

+ (id)computeDeviceOfComputeDevices:(id)arg1 mostCompatibleWithComputeDevice:(id)arg2 options:(unsigned long long)arg3;	// IMP=0x00800000000a6739
+ (id)mostPerformantComputeDeviceOfComputeDevices:(id)arg1;	// IMP=0x00800000000a66bb
+ (long long)performanceScoreForComputeDevice:(id)arg1;	// IMP=0x00800000000a66a6
+ (id)metalDeviceForComputeDevice:(id)arg1;	// IMP=0x00800000000a6643
+ (id)computeDeviceForMetalDevice:(id)arg1;	// IMP=0x00800000000a6470
+ (_Bool)computeDevice:(id)arg1 isOneTypeOfTypes:(unsigned long long)arg2;	// IMP=0x00800000000a6434
+ (id)computeDevicesOfTypes:(unsigned long long)arg1;	// IMP=0x00800000000a63d0
+ (id)computeDevices:(id)arg1 ofTypes:(unsigned long long)arg2;	// IMP=0x00800000000a636e
+ (id)computeDevicesPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x00800000000a62f1
+ (id)computeDevices:(id)arg1 passingTest:(CDUnknownBlockType)arg2;	// IMP=0x00800000000a6215
+ (unsigned long long)typeOfComputeDevice:(id)arg1;	// IMP=0x00800000000a6200
+ (unsigned long long)computeDeviceTypesForMLComputeUnits:(long long)arg1;	// IMP=0x00800000000a61e6
+ (id)allGPUAndNeuralEngineComputeDevices;	// IMP=0x00800000000a6194
+ (id)allCPUAndNeuralEngineComputeDevices;	// IMP=0x00800000000a6142
+ (id)allCPUAndGPUComputeDevices;	// IMP=0x00800000000a60f0
+ (id)espressoV1ModelComputeDevices;	// IMP=0x00800000000a609e
+ (id)mostPerformantNeuralEngineComputeDevice;	// IMP=0x00800000000a603f
+ (id)mostPerformantGPUComputeDevice;	// IMP=0x00800000000a5fe0
+ (id)mostPerformantCPUComputeDevice;	// IMP=0x00800000000a5f81
+ (id)mostPerformantComputeDevice;	// IMP=0x00800000000a5f34
+ (id)allNeuralEngineComputeDevices;	// IMP=0x00800000000a5f1d
+ (id)allGPUComputeDevices;	// IMP=0x00800000000a5f06
+ (id)allCPUComputeDevices;	// IMP=0x00800000000a5eef
+ (id)allComputeDevices;	// IMP=0x00800000000a5eaa
+ (_Bool)isNeuralEngineComputeDevice:(id)arg1;	// IMP=0x00800000000a5e90
+ (_Bool)isGPUComputeDevice:(id)arg1;	// IMP=0x00800000000a5e76
+ (_Bool)isCPUComputeDevice:(id)arg1;	// IMP=0x00800000000a5e5c

@end

