//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface _MapsApplicationDelegateTestingCoordinator : NSObject
{
}

+ (_Bool)_writeSampleDataToHistoryContainer;	// IMP=0x0020000000495946
+ (_Bool)application:(id)arg1 testName:(id)arg2 options:(id)arg3 shouldLoadSampleProactiveData:(_Bool)arg4 shouldRaiseExceptionIfNeeded:(_Bool)arg5 runTest:(CDUnknownBlockType)arg6;	// IMP=0x00100000004956bc
+ (id)currentTest;	// IMP=0x00100000004956ab
+ (void)setCurrentTest:(id)arg1;	// IMP=0x0010000000495697
+ (void)doPostLauchTestSetupWithMapView:(id)arg1 mapsAppTesting:(id)arg2;	// IMP=0x0010000000495475

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

