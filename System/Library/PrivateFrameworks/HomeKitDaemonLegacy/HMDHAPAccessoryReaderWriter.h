//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMDHAPAccessoryTaskTracker, HMDHome, NSString;
@protocol HMDHAPAccessoryReaderWriterDataSource;

__attribute__((visibility("hidden")))
@interface HMDHAPAccessoryReaderWriter : NSObject
{
    HMDHAPAccessoryTaskTracker *_tracker;	// 8 = 0x8
    HMDHome *_home;	// 16 = 0x10
    id <HMDHAPAccessoryReaderWriterDataSource> _dataSource;	// 24 = 0x18
}

+ (id)logCategory;	// IMP=0x0010000000b93393
- (void).cxx_destruct;	// IMP=0x0000000000b92e13
@property(readonly) id <HMDHAPAccessoryReaderWriterDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly) __weak HMDHome *home; // @synthesize home=_home;
@property(readonly) HMDHAPAccessoryTaskTracker *tracker; // @synthesize tracker=_tracker;
- (id)logIdentifier;	// IMP=0x0000000000b92d5b
- (CDUnknownBlockType)_completionHandlerWithContext:(id)arg1;	// IMP=0x0000000000b92c6a
- (_Bool)_isPrimaryResidentDevice;	// IMP=0x0000000000b92c26
- (_Bool)_isSecondaryResidentDevice;	// IMP=0x0000000000b92bc5
- (_Bool)_isNotResidentDevice;	// IMP=0x0000000000b92b7d
- (_Bool)_cannotForwardMessage:(id)arg1;	// IMP=0x0000000000b92b61
- (void)submitWriteRequests:(id)arg1 sourceType:(unsigned long long)arg2 requestMessage:(id)arg3;	// IMP=0x0000000000b92770
- (id)_defaultTaskForCurrentDeviceWithContext:(id)arg1 requests:(id)arg2;	// IMP=0x0000000000b92568
- (void)submitReadRequests:(id)arg1 sourceType:(unsigned long long)arg2 requestMessage:(id)arg3;	// IMP=0x0000000000b92181
- (void)handleRemotelyUpdatedCharacteristicsMessage:(id)arg1;	// IMP=0x0000000000b91e18
- (id)initWithHome:(id)arg1 dataSource:(id)arg2;	// IMP=0x0000000000b91d69
- (id)initWithHome:(id)arg1;	// IMP=0x0000000000b91d05

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

