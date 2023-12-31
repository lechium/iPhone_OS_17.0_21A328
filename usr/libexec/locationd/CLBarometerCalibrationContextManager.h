//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLBarometerCalibrationSourceAggregator, CLBarometerCalibrationTrack;
@protocol CLBarometerCalibrationContextClient, CLIntersiloUniverse;

@interface CLBarometerCalibrationContextManager : NSObject
{
    id <CLIntersiloUniverse> _universe;	// 8 = 0x8
    id <CLBarometerCalibrationContextClient> _delegate;	// 16 = 0x10
    void *fDataBuffers;	// 24 = 0x18
    CLBarometerCalibrationSourceAggregator *_sourceAggregator;	// 32 = 0x20
    CLBarometerCalibrationTrack *_fTrack;	// 40 = 0x28
}

@property(retain, nonatomic) CLBarometerCalibrationTrack *fTrack; // @synthesize fTrack=_fTrack;
- (void)cleanup;	// IMP=0x0010000000a09ec5
- (void)notificationAcknowledged:(unsigned long long)arg1;	// IMP=0x0010000000a09ebf
- (void)onCharger:(_Bool)arg1;	// IMP=0x0010000000a09eb9
- (void)stepCountElevationNotification:(union NotificationData)arg1;	// IMP=0x0010000000a09eb3
- (void)wetStateUpdated:(unsigned long long)arg1;	// IMP=0x0010000000a09ead
- (void)sourceUpdated:(unsigned long long)arg1;	// IMP=0x0010000000a09ea7
- (void)clientConnected:(id)arg1 withNotification:(unsigned long long)arg2;	// IMP=0x0010000000a09ea1
- (void)dealloc;	// IMP=0x0010000000a09e63
- (id)initWithUniverse:(id)arg1 delegate:(id)arg2 withBuffer:(void *)arg3 withSourceAggregator:(id)arg4;	// IMP=0x0010000000a09d41

@end

