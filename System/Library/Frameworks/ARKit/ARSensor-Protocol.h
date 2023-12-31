//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ARKit/NSObject-Protocol.h>

@protocol ARSensorDelegate;

@protocol ARSensor <NSObject>
@property(nonatomic) __weak id <ARSensorDelegate> delegate;
- (void)stop;
- (void)start;
- (unsigned long long)providedDataTypes;

@optional
@property(nonatomic) unsigned long long powerUsage;
- (void)waitForOutstandingCallbacks;
- (void)forceUpdatePowerUsage:(unsigned long long)arg1;
@end

